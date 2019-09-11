#include "ft_strace.h"

# define CEIL_MULTIPLE(val, mul) ((val / mul + 1) * mul)


size_t		print_escape_string(const uint8_t *str, const size_t size, const size_t max_print_size) {
	int8_t	*escape_str;
	size_t	i = 0;
	char	buff[4];
	const uint8_t *ptr = str;

	escape_str = malloc(max_print_size * 4 + 1);
	if (!escape_str) {
		printf("ft_strace: malloc: %s\n", strerror(errno));
		exit(EXIT_FAILURE);
	}

	while ((size_t)(str - ptr) < size) {
		if (*str == '\f') {
			memcpy(escape_str + i, "\\f", 3);
			i += 2;
		}
		else if (*str == '\n') {
			memcpy(escape_str + i, "\\n", 3);
			i += 2;
		}
		else if (*str == '\r') {
			memcpy(escape_str + i, "\\r", 3);
			i += 2;
		}
		else if (*str == '\t') {
			memcpy(escape_str + i, "\\t", 3);
			i += 2;
		}
		else if (*str == '\v') {
			memcpy(escape_str + i, "\\v", 3);
			i += 2;
		}
		else if (isprint(*str))
			escape_str[i++] = *str;
		else {
			sprintf(buff, "%hho", *str);
			escape_str[i++] = '\\';
			memcpy(escape_str + i, buff, strlen(buff));
			i += strlen(buff);
		}
		str++;
	}
	escape_str[i] = 0;

	size_t	ret_print;
	if (size >= max_print_size)
		ret_print = fprintf(stderr, "\"%s\"...", escape_str);
	else
		ret_print = fprintf(stderr, "\"%s\"", escape_str);
	free(escape_str);
	return (ret_print);
}

static size_t print_char(uintmax_t reg, __unused pid_t child, __unused size_t size)			{ return fprintf(stderr, "%hhd", (char)reg); }
static size_t print_short(uintmax_t reg, __unused pid_t child, __unused size_t size)		{ return fprintf(stderr, "%hd", (short)reg); }
static size_t print_int(uintmax_t reg, __unused pid_t child, __unused size_t size)			{ return fprintf(stderr, "%d", (int)reg); }
static size_t print_longint(uintmax_t reg, __unused pid_t child, __unused size_t size)		{ return fprintf(stderr, "%ld", (long int)reg); }
static size_t print_longlongint(uintmax_t reg, __unused pid_t child, __unused size_t size)	{ return fprintf(stderr, "%lld", (long long int)reg); }

static size_t print_uchar(uintmax_t reg, __unused pid_t child, __unused size_t size)		{ return fprintf(stderr, "%hhu", (unsigned char)reg); }
static size_t print_ushort(uintmax_t reg, __unused pid_t child, __unused size_t size)		{ return fprintf(stderr, "%hu", (unsigned short)reg); }
static size_t print_uint(uintmax_t reg, __unused pid_t child, __unused size_t size)			{ return fprintf(stderr, "%u", (unsigned int)reg); }
static size_t print_ulongint(uintmax_t reg, __unused pid_t child, __unused size_t size)		{ return fprintf(stderr, "%lu", (unsigned long int)reg); }
static size_t print_ulonglongint(uintmax_t reg, __unused pid_t child, __unused size_t size)	{ return fprintf(stderr, "%llu", (unsigned long long int)reg); }

static size_t print_float(uintmax_t reg, __unused pid_t child, __unused size_t size)		{ return fprintf(stderr, "%f", (float)reg); }
static size_t print_double(uintmax_t reg, __unused pid_t child, __unused size_t size)		{ return fprintf(stderr, "%f", (double)reg); }
static size_t print_longdouble(uintmax_t reg, __unused pid_t child, __unused size_t size)	{ return fprintf(stderr, "%Lf", (long double)reg); }

static size_t print_addr(uintmax_t reg, __unused pid_t child, __unused size_t size)			{ return fprintf(stderr, "0x%ju", (uintmax_t)reg); }

static size_t print_buff(uintmax_t reg, __unused pid_t child, size_t size)					{
	uint8_t		str[CEIL_MULTIPLE(BUFF_UNESCAPE_MAX_SIZE + 1, sizeof(uintmax_t))];
	size_t		total_read = 0;
	uintmax_t	tmp;

	while (total_read < size && total_read < BUFF_UNESCAPE_MAX_SIZE) {
		tmp = ptrace(PTRACE_PEEKDATA, child, reg + total_read, NULL);
		if (tmp == (uintmax_t)-1) break;
		memcpy(str + total_read, &tmp, sizeof(tmp));
		total_read += sizeof(tmp);
	}
	str[total_read] = 0;
	return (print_escape_string(str, total_read, BUFF_UNESCAPE_MAX_SIZE));
}

static size_t print_str(uintmax_t reg, pid_t child, __unused size_t size)					{
	uint8_t		str[CEIL_MULTIPLE(STR_UNESCAPE_MAX_SIZE + 1, sizeof(uintmax_t))];
	size_t		total_read = 0;
	uintmax_t	tmp;
	void		*ptr;

	while (total_read < STR_UNESCAPE_MAX_SIZE) {
		tmp = ptrace(PTRACE_PEEKDATA, child, reg + total_read, NULL);
		if (tmp == (uintmax_t)-1) break;
		memcpy(str + total_read, &tmp, sizeof(tmp));
		ptr = memchr(&tmp, 0, sizeof(tmp));
		if (ptr) {
			total_read += ptr - (void *)&tmp;
			break;
		}
		total_read += sizeof(tmp);
	}
	str[total_read] = 0;
	return (print_escape_string(str, total_read, STR_UNESCAPE_MAX_SIZE));
}

size_t		print_arg(uintmax_t reg, enum e_type_syscall_arg type, pid_t child, size_t size)
{
	static size_t (* const print_fn[])(uintmax_t, pid_t, size_t) = {
	# include "print_function.h"
	};
	return (print_fn[type](reg, child, size));
}

bool		print_ret_val(union x86_64_regs *regs, enum e_type_syscall_arg type, pid_t child, int *status, size_t nb_char_print, struct s_syscall_state state) {
	nb_char_print += fprintf(stderr, ") ");
	if (nb_char_print < LINE_MIN_SIZE)
		fprintf(stderr, "%*s", LINE_MIN_SIZE - (int)nb_char_print, "");
	if ((state.time_status == SYSCALL_BEGIN && !handle_sig_and_wait_syscall(child, status)) || state.is_exited == true) {
		fprintf(stderr, "= ?\n");
		return (false);
	}
	get_registers_values(regs, child);
	fprintf(stderr, "= ");
	if (state.arch == SYSCALL_32)
		#ifdef __x86_64__
			print_arg((uint32_t)regs->x86_64_r.rax, type, child, 0);
		#else
			print_arg(regs->i386_r.eax, type, child, 0);
		#endif
	else
		print_arg(regs->x86_64_r.rax, type, child, 0);
	fprintf(stderr, "\n");
	return (true);
}

bool		syscall64_generic_handler(union x86_64_regs *regs, const struct s_syscall_data *syscall_data, pid_t child, enum e_syscall_arch syscall_arch, int *status)
{
	static const size_t regs_offset [] = {
		offsetof(struct x86_64_user_regs_struct, rdi),
		offsetof(struct x86_64_user_regs_struct, rsi),
		offsetof(struct x86_64_user_regs_struct, rdx),
		offsetof(struct x86_64_user_regs_struct, r10),
		offsetof(struct x86_64_user_regs_struct, r8),
		offsetof(struct x86_64_user_regs_struct, r9)
	};

	size_t nb_char_print = 0;
	nb_char_print += fprintf(stderr, "%s(", syscall_data->name);

	for (uint8_t i = 0; syscall_data->args[i] != NONE && i < MAX_ARG; i++) {
		if (i > 0) nb_char_print += fprintf(stderr, ", ");
		nb_char_print += print_arg(*(uintmax_t *)((void *)regs + regs_offset[i]), syscall_data->args[i], child, 0);
	}
	return print_ret_val(regs, syscall_data->args[6], child, status, nb_char_print, (struct s_syscall_state){SYSCALL_BEGIN, syscall_arch, false});
}

bool		syscall32_generic_handler(union x86_64_regs *regs, const struct s_syscall_data *syscall_data, pid_t child, enum e_syscall_arch syscall_arch, int *status)
{
	static const size_t regs_offset [] = {
		offsetof(struct i386_user_regs_struct, ebx),
		offsetof(struct i386_user_regs_struct, ecx),
		offsetof(struct i386_user_regs_struct, edx),
		offsetof(struct i386_user_regs_struct, esi),
		offsetof(struct i386_user_regs_struct, edi),
		offsetof(struct i386_user_regs_struct, ebp)
	};

	size_t nb_char_print = 0;
	nb_char_print += fprintf(stderr, "%s(", syscall_data->name);

	for (uint8_t i = 0; syscall_data->args[i] != NONE && i < MAX_ARG; i++) {
		if (i > 0) nb_char_print += fprintf(stderr, ", ");
		nb_char_print += print_arg((*(uint32_t *)((void *)regs + regs_offset[i])), syscall_data->args[i], child, 0);
	}
	return print_ret_val(regs, syscall_data->args[6], child, status, nb_char_print, (struct s_syscall_state){SYSCALL_BEGIN, syscall_arch, false});
}

bool		get_and_print_syscall_64(union x86_64_regs *regs, pid_t child, int *status) {
	static const struct s_syscall_data syscall64[] = {
	# include "syscall64.h"
	};

	if (regs->x86_64_r.orig_rax > COUNT_OF(syscall64)) {
		printf("ft_strace: wrong syscall number (%llu)\n", regs->x86_64_r.orig_rax);
		exit(EXIT_FAILURE);
	}

	return syscall64[regs->x86_64_r.orig_rax].handler(regs, &syscall64[regs->x86_64_r.orig_rax], child, SYSCALL_64, status);
}

bool		get_and_print_syscall_32(union x86_64_regs *regs, pid_t child, int *status) {
	static const struct s_syscall_data syscall32[] = {
	# include "syscall32.h"
	};

	if (regs->i386_r.orig_eax > COUNT_OF(syscall32)) {
		printf("ft_strace: wrong syscall number (%u)\n", regs->i386_r.orig_eax);
		exit(EXIT_FAILURE);
	}

	return syscall32[regs->i386_r.orig_eax].handler(regs, &syscall32[regs->i386_r.orig_eax], child, SYSCALL_32, status);
}

