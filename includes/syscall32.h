[  0] = {"restart_syscall", {NONE, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[  1] = {"exit", {INT, NONE, NONE, NONE, NONE, NONE, NONE}, &syscall32_generic_handler},
[  2] = {"fork", {NONE, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[  3] = {"read", {INT, BUFF, ULINT, NONE, NONE, NONE, LINT}, &syscall_read_write_handler},
[  4] = {"write", {INT, BUFF, ULINT, NONE, NONE, NONE, LINT}, &syscall_read_write_handler},
[  5] = {"open", {STR, INT, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[  6] = {"close", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[  7] = {"waitpid", {INT, ADDR, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[  8] = {"creat", {STR, UINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[  9] = {"link", {STR, STR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 10] = {"unlink", {STR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 11] = {"execve", {STR, ADDR, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 12] = {"chdir", {STR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 13] = {"time", {ADDR, NONE, NONE, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[ 14] = {"mknod", {STR, UINT, ULINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 15] = {"chmod", {STR, UINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 16] = {"lchown", {STR, UINT, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 17] = {"break", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Unimplemented syscall
[ 18] = {"oldstat", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[ 19] = {"lseek", {INT, LINT, INT, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[ 20] = {"getpid", {NONE, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 21] = {"mount", {STR, STR, STR, ULINT, ADDR, NONE, INT}, &syscall32_generic_handler},
[ 22] = {"umount", {STR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 23] = {"setuid", {UINT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 24] = {"getuid", {NONE, NONE, NONE, NONE, NONE, NONE, UINT}, &syscall32_generic_handler},
[ 25] = {"stime", {ADDR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 26] = {"ptrace", {E_PTRACE_REQUEST, INT, ADDR, ADDR, NONE, NONE, LINT}, &syscall32_generic_handler},
[ 27] = {"alarm", {UINT, NONE, NONE, NONE, NONE, NONE, UINT}, &syscall32_generic_handler},
[ 28] = {"oldfstat", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[ 29] = {"pause", {NONE, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 30] = {"utime", {STR, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 31] = {"stty", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Unimplemented syscall
[ 32] = {"gtty", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Unimplemented syscall
[ 33] = {"access", {STR, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 34] = {"nice", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 35] = {"ftime", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Unimplemented syscall
[ 36] = {"sync", {NONE, NONE, NONE, NONE, NONE, NONE, NONE}, &syscall32_generic_handler},
[ 37] = {"kill", {INT, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 38] = {"rename", {STR, STR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 39] = {"mkdir", {STR, UINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 40] = {"rmdir", {STR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 41] = {"dup", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 42] = {"pipe", {ADDR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 43] = {"times", {ADDR, NONE, NONE, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[ 44] = {"prof", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Unimplemented syscall
[ 45] = {"brk", {ADDR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 46] = {"setgid", {UINT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 47] = {"getgid", {NONE, NONE, NONE, NONE, NONE, NONE, UINT}, &syscall32_generic_handler},
[ 48] = {"signal", {INT, T_SIGHANDLER_T, NONE, NONE, NONE, NONE, T_SIGHANDLER_T}, &syscall32_generic_handler},
[ 49] = {"geteuid", {NONE, NONE, NONE, NONE, NONE, NONE, UINT}, &syscall32_generic_handler},
[ 50] = {"getegid", {NONE, NONE, NONE, NONE, NONE, NONE, UINT}, &syscall32_generic_handler},
[ 51] = {"acct", {STR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 52] = {"umount2", {STR, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 53] = {"lock", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Unimplemented syscall
[ 54] = {"ioctl", {INT, ULINT, ULLINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 55] = {"fcntl", {INT, INT, ULLINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 56] = {"mpx", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Unimplemented syscall
[ 57] = {"setpgid", {INT, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 58] = {"ulimit", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Unimplemented syscall
[ 59] = {"oldolduname", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[ 60] = {"umask", {UINT, NONE, NONE, NONE, NONE, NONE, UINT}, &syscall32_generic_handler},
[ 61] = {"chroot", {STR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 62] = {"ustat", {ULINT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 63] = {"dup2", {INT, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 64] = {"getppid", {NONE, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 65] = {"getpgrp", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 66] = {"setsid", {NONE, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 67] = {"sigaction", {INT, ADDR, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 68] = {"sgetmask", {NONE, NONE, NONE, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[ 69] = {"ssetmask", {LINT, NONE, NONE, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[ 70] = {"setreuid", {UINT, UINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 71] = {"setregid", {UINT, UINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 72] = {"sigsuspend", {ADDR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 73] = {"sigpending", {ADDR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 74] = {"sethostname", {STR, ULINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 75] = {"setrlimit", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 76] = {"getrlimit", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 77] = {"getrusage", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 78] = {"gettimeofday", {ADDR, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 79] = {"settimeofday", {ADDR, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 80] = {"getgroups", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 81] = {"setgroups", {ULINT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 82] = {"select", {INT, ADDR, ADDR, ADDR, ADDR, NONE, INT}, &syscall32_generic_handler},
[ 83] = {"symlink", {STR, STR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 84] = {"oldlstat", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[ 85] = {"readlink", {STR, STR, ULINT, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[ 86] = {"uselib", {STR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 87] = {"swapon", {STR, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 88] = {"reboot", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 89] = {"readdir", {UINT, ADDR, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 90] = {"mmap", {ADDR, ULINT, INT, INT, INT, LINT, ADDR}, &syscall32_generic_handler},
[ 91] = {"munmap", {ADDR, ULINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 92] = {"truncate", {STR, LINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 93] = {"ftruncate", {INT, LINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 94] = {"fchmod", {INT, UINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 95] = {"fchown", {INT, UINT, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 96] = {"getpriority", {INT, UINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 97] = {"setpriority", {INT, UINT, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[ 98] = {"profil", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Unimplemented syscall
[ 99] = {"statfs", {STR, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[100] = {"fstatfs", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[101] = {"ioperm", {ULINT, ULINT, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[102] = {"socketcall", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[103] = {"syslog", {INT, STR, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[104] = {"setitimer", {INT, ADDR, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[105] = {"getitimer", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[106] = {"stat", {STR, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[107] = {"lstat", {STR, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[108] = {"fstat", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[109] = {"olduname", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[110] = {"iopl", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[111] = {"vhangup", {NONE, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[112] = {"idle", {NONE, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[113] = {"vm86old", {ADDR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[114] = {"wait4", {INT, ADDR, INT, ADDR, NONE, NONE, INT}, &syscall32_generic_handler},
[115] = {"swapoff", {STR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[116] = {"sysinfo", {ADDR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[117] = {"ipc", {UINT, INT, INT, INT, ADDR, LINT, INT}, &syscall32_generic_handler},
[118] = {"fsync", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[119] = {"sigreturn", {ULLINT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[120] = {"clone", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[121] = {"setdomainname", {STR, ULINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[122] = {"uname", {ADDR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[123] = {"modify_ldt", {INT, ADDR, ULINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[124] = {"adjtimex", {ADDR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[125] = {"mprotect", {ADDR, ULINT, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[126] = {"sigprocmask", {INT, ADDR, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[127] = {"create_module", {STR, ULINT, NONE, NONE, NONE, NONE, T_CADDR_T}, &syscall32_generic_handler},
[128] = {"init_module", {ADDR, ULINT, STR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[129] = {"delete_module", {STR, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[130] = {"get_kernel_syms", {ADDR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[131] = {"quotactl", {INT, STR, INT, T_CADDR_T, NONE, NONE, INT}, &syscall32_generic_handler},
[132] = {"getpgid", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[133] = {"fchdir", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[134] = {"bdflush", {INT, LINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[135] = {"sysfs", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[136] = {"personality", {ULINT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[137] = {"afs_syscall", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Unimplemented syscall
[138] = {"setfsuid", {UINT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[139] = {"setfsgid", {UINT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[140] = {"_llseek", {UINT, ULINT, ULINT, ADDR, UINT, NONE, INT}, &syscall32_generic_handler},
[141] = {"getdents", {UINT, ADDR, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[142] = {"_newselect", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[143] = {"flock", {INT, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[144] = {"msync", {ADDR, ULINT, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[145] = {"readv", {INT, ADDR, INT, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[146] = {"writev", {INT, ADDR, INT, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[147] = {"getsid", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[148] = {"fdatasync", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[149] = {"_sysctl", {ADDR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[150] = {"mlock", {ADDR, ULINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[151] = {"munlock", {ADDR, ULINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[152] = {"mlockall", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[153] = {"munlockall", {NONE, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[154] = {"sched_setparam", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[155] = {"sched_getparam", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[156] = {"sched_setscheduler", {INT, INT, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[157] = {"sched_getscheduler", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[158] = {"sched_yield", {NONE, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[159] = {"sched_get_priority_max", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[160] = {"sched_get_priority_min", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[161] = {"sched_rr_get_interval", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[162] = {"nanosleep", {ADDR, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[163] = {"mremap", {ADDR, ULINT, ULINT, INT, ULLINT, NONE, ADDR}, &syscall32_generic_handler},
[164] = {"setresuid", {UINT, UINT, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[165] = {"getresuid", {ADDR, ADDR, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[166] = {"vm86", {ULINT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[167] = {"query_module", {STR, INT, ADDR, ULINT, ADDR, NONE, INT}, &syscall32_generic_handler},
[168] = {"poll", {ADDR, ULINT, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[169] = {"nfsservctl", {INT, ADDR, ADDR, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[170] = {"setresgid", {UINT, UINT, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[171] = {"getresgid", {ADDR, ADDR, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[172] = {"prctl", {INT, ULINT, ULINT, ULINT, ULINT, NONE, INT}, &syscall32_generic_handler},
[173] = {"rt_sigreturn", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[174] = {"rt_sigaction", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[175] = {"rt_sigprocmask", {INT, ADDR, ADDR, ULINT, NONE, NONE, INT}, &syscall32_generic_handler},
[176] = {"rt_sigpending", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[177] = {"rt_sigtimedwait", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[178] = {"rt_sigqueueinfo", {INT, INT, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[179] = {"rt_sigsuspend", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[180] = {"pread", {INT, ADDR, ULINT, LINT, NONE, NONE, LINT}, &syscall32_generic_handler},
[181] = {"pwrite", {INT, ADDR, ULINT, LINT, NONE, NONE, LINT}, &syscall32_generic_handler},
[182] = {"chown", {STR, UINT, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[183] = {"getcwd", {STR, ULINT, NONE, NONE, NONE, NONE, STR}, &syscall32_generic_handler},
[184] = {"capget", {UNKNOWN, UNKNOWN, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler}, // Unknown type
[185] = {"capset", {UNKNOWN, UNKNOWN, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler}, // Unknown type
[186] = {"sigaltstack", {ADDR, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[187] = {"sendfile", {INT, INT, ADDR, ULINT, NONE, NONE, LINT}, &syscall32_generic_handler},
[188] = {"getpmsg", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Unimplemented syscall
[189] = {"putpmsg", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Unimplemented syscall
[190] = {"vfork", {NONE, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[191] = {"ugetrlimit", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[192] = {"mmap2", {ADDR, ULINT, INT, INT, INT, LINT, ADDR}, &syscall32_generic_handler},
[193] = {"truncate", {STR, LINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[194] = {"ftruncate", {INT, LINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[195] = {"stat", {STR, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[196] = {"lstat", {STR, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[197] = {"fstat", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[198] = {"lchown", {STR, UINT, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[199] = {"getuid", {NONE, NONE, NONE, NONE, NONE, NONE, UINT}, &syscall32_generic_handler},
[200] = {"getgid", {NONE, NONE, NONE, NONE, NONE, NONE, UINT}, &syscall32_generic_handler},
[201] = {"geteuid", {NONE, NONE, NONE, NONE, NONE, NONE, UINT}, &syscall32_generic_handler},
[202] = {"getegid", {NONE, NONE, NONE, NONE, NONE, NONE, UINT}, &syscall32_generic_handler},
[203] = {"setreuid", {UINT, UINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[204] = {"setregid", {UINT, UINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[205] = {"getgroups", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[206] = {"setgroups", {ULINT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[207] = {"fchown", {INT, UINT, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[208] = {"setresuid", {UINT, UINT, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[209] = {"getresuid", {ADDR, ADDR, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[210] = {"setresgid", {UINT, UINT, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[211] = {"getresgid", {ADDR, ADDR, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[212] = {"chown", {STR, UINT, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[213] = {"setuid", {UINT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[214] = {"setgid", {UINT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[215] = {"setfsuid", {UINT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[216] = {"setfsgid", {UINT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[217] = {"pivot_root", {STR, STR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[218] = {"mincore", {ADDR, ULINT, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[219] = {"madvise", {ADDR, ULINT, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[220] = {"getdents", {UINT, ADDR, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[221] = {"fcntl", {INT, INT, ULLINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[222] = {"gettid", {NONE, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[223] = {"readahead", {INT, LINT, ULINT, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[224] = {"setxattr", {STR, STR, ADDR, ULINT, INT, NONE, INT}, &syscall32_generic_handler},
[225] = {"lsetxattr", {STR, STR, ADDR, ULINT, INT, NONE, INT}, &syscall32_generic_handler},
[226] = {"fsetxattr", {INT, STR, ADDR, ULINT, INT, NONE, INT}, &syscall32_generic_handler},
[227] = {"getxattr", {STR, STR, ADDR, ULINT, NONE, NONE, LINT}, &syscall32_generic_handler},
[228] = {"lgetxattr", {STR, STR, ADDR, ULINT, NONE, NONE, LINT}, &syscall32_generic_handler},
[229] = {"fgetxattr", {INT, STR, ADDR, ULINT, NONE, NONE, LINT}, &syscall32_generic_handler},
[230] = {"listxattr", {STR, STR, ULINT, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[231] = {"llistxattr", {STR, STR, ULINT, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[232] = {"flistxattr", {INT, STR, ULINT, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[233] = {"removexattr", {STR, STR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[234] = {"lremovexattr", {STR, STR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[235] = {"fremovexattr", {INT, STR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[236] = {"tkill", {INT, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[237] = {"sendfile", {INT, INT, ADDR, ULINT, NONE, NONE, LINT}, &syscall32_generic_handler},
[238] = {"futex", {ADDR, INT, INT, ADDR, ADDR, INT, INT}, &syscall32_generic_handler},
[239] = {"sched_setaffinity", {INT, ULINT, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[240] = {"sched_getaffinity", {INT, ULINT, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[241] = {"set_thread_area", {ULINT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[242] = {"get_thread_area", {NONE, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[243] = {"io_setup", {UINT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[244] = {"io_destroy", {ULINT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[245] = {"io_getevents", {ULINT, LINT, LINT, ADDR, ADDR, NONE, INT}, &syscall32_generic_handler},
[246] = {"io_submit", {ULINT, LINT, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[247] = {"io_cancel", {ULINT, ADDR, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[248] = {"fadvise", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[249] = {"exit_group", {INT, NONE, NONE, NONE, NONE, NONE, NONE}, &syscall32_generic_handler},
[250] = {"lookup_dcookie", {ULLINT, STR, ULINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[251] = {"epoll_create", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[252] = {"epoll_ctl", {INT, INT, INT, ADDR, NONE, NONE, INT}, &syscall32_generic_handler},
[253] = {"epoll_wait", {INT, ADDR, INT, INT, NONE, NONE, INT}, &syscall32_generic_handler},
[254] = {"remap_file_pages", {ADDR, ULINT, INT, ULINT, INT, NONE, INT}, &syscall32_generic_handler},
[255] = {"set_tid_address", {ADDR, NONE, NONE, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[256] = {"timer_create", {INT, ADDR, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[257] = {"timer_settime", {UNKNOWN, INT, ADDR, ADDR, NONE, NONE, INT}, &syscall32_generic_handler},
[258] = {"timer_gettime", {UNKNOWN, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[259] = {"timer_getoverrun", {UNKNOWN, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler}, // Unknown type
[260] = {"timer_delete", {UNKNOWN, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler}, // Unknown type
[261] = {"clock_settime", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[262] = {"clock_gettime", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[263] = {"clock_getres", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[264] = {"clock_nanosleep", {INT, INT, ADDR, ADDR, NONE, NONE, INT}, &syscall32_generic_handler},
[265] = {"statfs", {STR, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[266] = {"fstatfs", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[267] = {"tgkill", {INT, INT, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[268] = {"utimes", {STR, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[269] = {"fadvise_", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[270] = {"vserver", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Unimplemented syscall
[271] = {"mbind", {ADDR, ULINT, INT, ADDR, ULINT, UINT, LINT}, &syscall32_generic_handler},
[272] = {"get_mempolicy", {ADDR, ADDR, ULINT, ADDR, ULINT, NONE, LINT}, &syscall32_generic_handler},
[273] = {"set_mempolicy", {INT, ADDR, ULINT, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[274] = {"mq_open", {STR, INT, UINT, ADDR, NONE, NONE, INT}, &syscall32_generic_handler},
[275] = {"mq_unlink", {STR, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[276] = {"mq_timedsend", {INT, STR, ULINT, UINT, ADDR, NONE, INT}, &syscall32_generic_handler},
[277] = {"mq_timedreceive", {INT, STR, ULINT, ADDR, ADDR, NONE, LINT}, &syscall32_generic_handler},
[278] = {"mq_notify", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[279] = {"mq_getsetattr", {INT, ADDR, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[280] = {"kexec_load", {ULINT, ULINT, ADDR, ULINT, NONE, NONE, LINT}, &syscall32_generic_handler},
[281] = {"waitid", {UINT, UINT, ADDR, INT, NONE, NONE, INT}, &syscall32_generic_handler},
[282] = {"add_key", {STR, STR, ADDR, ULINT, INT, NONE, INT}, &syscall32_generic_handler},
[283] = {"request_key", {STR, STR, STR, INT, NONE, NONE, INT}, &syscall32_generic_handler},
[284] = {"keyctl", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[285] = {"ioprio_set", {INT, INT, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[286] = {"ioprio_get", {INT, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[287] = {"inotify_init", {NONE, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[288] = {"inotify_add_watch", {INT, STR, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[289] = {"inotify_rm_watch", {INT, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[290] = {"migrate_pages", {INT, ULINT, ADDR, ADDR, NONE, NONE, LINT}, &syscall32_generic_handler},
[291] = {"openat", {INT, STR, INT, UINT, NONE, NONE, INT}, &syscall32_generic_handler},
[292] = {"mkdirat", {INT, STR, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[293] = {"mknodat", {INT, STR, UINT, ULINT, NONE, NONE, INT}, &syscall32_generic_handler},
[294] = {"fchownat", {INT, STR, UINT, UINT, INT, NONE, INT}, &syscall32_generic_handler},
[295] = {"futimesat", {INT, STR, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[296] = {"fstatat", {INT, STR, ADDR, INT, NONE, NONE, INT}, &syscall32_generic_handler},
[297] = {"unlinkat", {INT, STR, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[298] = {"renameat", {INT, STR, INT, STR, NONE, NONE, INT}, &syscall32_generic_handler},
[299] = {"linkat", {INT, STR, INT, STR, INT, NONE, INT}, &syscall32_generic_handler},
[300] = {"symlinkat", {STR, INT, STR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[301] = {"readlinkat", {INT, STR, STR, ULINT, NONE, NONE, LINT}, &syscall32_generic_handler},
[302] = {"fchmodat", {INT, STR, UINT, INT, NONE, NONE, INT}, &syscall32_generic_handler},
[303] = {"faccessat", {INT, STR, INT, INT, NONE, NONE, INT}, &syscall32_generic_handler},
[304] = {"pselect6", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[305] = {"ppoll", {ADDR, ULINT, ADDR, ADDR, NONE, NONE, INT}, &syscall32_generic_handler},
[306] = {"unshare", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[307] = {"set_robust_list", {ADDR, ULINT, NONE, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[308] = {"get_robust_list", {INT, ADDR, ADDR, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[309] = {"splice", {INT, ADDR, INT, ADDR, ULINT, UINT, LINT}, &syscall32_generic_handler},
[310] = {"sync_file_range", {INT, LINT, LINT, UINT, NONE, NONE, INT}, &syscall32_generic_handler},
[311] = {"tee", {INT, INT, ULINT, UINT, NONE, NONE, LINT}, &syscall32_generic_handler},
[312] = {"vmsplice", {INT, ADDR, ULINT, UINT, NONE, NONE, LINT}, &syscall32_generic_handler},
[313] = {"move_pages", {INT, ULINT, ADDR, ADDR, ADDR, INT, LINT}, &syscall32_generic_handler},
[314] = {"getcpu", {ADDR, ADDR, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[315] = {"epoll_pwait", {INT, ADDR, INT, INT, ADDR, NONE, INT}, &syscall32_generic_handler},
[316] = {"utimensat", {INT, STR, ADDR, INT, NONE, NONE, INT}, &syscall32_generic_handler},
[317] = {"signalfd", {INT, ADDR, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[318] = {"timerfd_create", {INT, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[319] = {"eventfd", {UINT, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[320] = {"fallocate", {INT, INT, LINT, LINT, NONE, NONE, INT}, &syscall32_generic_handler},
[321] = {"timerfd_settime", {INT, INT, ADDR, ADDR, NONE, NONE, INT}, &syscall32_generic_handler},
[322] = {"timerfd_gettime", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[323] = {"signalfd4", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[324] = {"eventfd2", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[325] = {"epoll_create1", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[326] = {"dup3", {INT, INT, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[327] = {"pipe2", {ADDR, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[328] = {"inotify_init1", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[329] = {"preadv", {INT, ADDR, INT, LINT, NONE, NONE, LINT}, &syscall32_generic_handler},
[330] = {"pwritev", {INT, ADDR, INT, LINT, NONE, NONE, LINT}, &syscall32_generic_handler},
[331] = {"rt_tgsigqueueinfo", {INT, INT, INT, ADDR, NONE, NONE, INT}, &syscall32_generic_handler},
[332] = {"perf_event_open", {ADDR, INT, INT, INT, ULINT, NONE, INT}, &syscall32_generic_handler},
[333] = {"recvmmsg", {INT, ADDR, UINT, INT, ADDR, NONE, INT}, &syscall32_generic_handler},
[334] = {"fanotify_init", {UINT, UINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[335] = {"fanotify_mark", {INT, UINT, ULINT, INT, STR, NONE, INT}, &syscall32_generic_handler},
[336] = {"prlimit", {INT, INT, ADDR, ADDR, NONE, NONE, INT}, &syscall32_generic_handler},
[337] = {"name_to_handle_at", {INT, STR, ADDR, ADDR, INT, NONE, INT}, &syscall32_generic_handler},
[338] = {"open_by_handle_at", {INT, ADDR, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[339] = {"clock_adjtime", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[340] = {"syncfs", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[341] = {"sendmmsg", {INT, ADDR, UINT, INT, NONE, NONE, INT}, &syscall32_generic_handler},
[342] = {"setns", {INT, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[343] = {"process_vm_readv", {INT, ADDR, ULINT, ADDR, ULINT, ULINT, LINT}, &syscall32_generic_handler},
[344] = {"process_vm_writev", {INT, ADDR, ULINT, ADDR, ULINT, ULINT, LINT}, &syscall32_generic_handler},
[345] = {"kcmp", {INT, INT, INT, ULINT, ULINT, NONE, INT}, &syscall32_generic_handler},
[346] = {"finit_module", {INT, STR, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[347] = {"sched_setattr", {INT, ADDR, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[348] = {"sched_getattr", {INT, ADDR, UINT, UINT, NONE, NONE, INT}, &syscall32_generic_handler},
[349] = {"renameat2", {INT, STR, INT, STR, UINT, NONE, INT}, &syscall32_generic_handler},
[350] = {"seccomp", {UINT, UINT, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[351] = {"getrandom", {ADDR, ULINT, UINT, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[352] = {"memfd_create", {STR, UINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[353] = {"bpf", {INT, ADDR, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[354] = {"execveat", {INT, STR, ADDR, ADDR, INT, NONE, INT}, &syscall32_generic_handler},
[355] = {"socket", {INT, INT, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[356] = {"socketpair", {INT, INT, INT, ADDR, NONE, NONE, INT}, &syscall32_generic_handler},
[357] = {"bind", {INT, ADDR, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[358] = {"connect", {INT, ADDR, UINT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[359] = {"listen", {INT, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[360] = {"accept4", {INT, ADDR, ADDR, INT, NONE, NONE, INT}, &syscall32_generic_handler},
[361] = {"getsockopt", {INT, INT, INT, ADDR, ADDR, NONE, INT}, &syscall32_generic_handler},
[362] = {"setsockopt", {INT, INT, INT, ADDR, UINT, NONE, INT}, &syscall32_generic_handler},
[363] = {"getsockname", {INT, ADDR, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[364] = {"getpeername", {INT, ADDR, ADDR, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[365] = {"sendto", {INT, ADDR, ULINT, INT, ADDR, UINT, LINT}, &syscall32_generic_handler},
[366] = {"sendmsg", {INT, ADDR, INT, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[367] = {"recvfrom", {INT, ADDR, ULINT, INT, ADDR, ADDR, LINT}, &syscall32_generic_handler},
[368] = {"recvmsg", {INT, ADDR, INT, NONE, NONE, NONE, LINT}, &syscall32_generic_handler},
[369] = {"shutdown", {INT, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[370] = {"userfaultfd", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[371] = {"membarrier", {INT, INT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[372] = {"mlock2", {ADDR, ULINT, INT, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[373] = {"copy_file_range", {INT, ADDR, INT, ADDR, ULINT, UINT, LINT}, &syscall32_generic_handler},
[374] = {"preadv2", {INT, ADDR, INT, LINT, INT, NONE, LINT}, &syscall32_generic_handler},
[375] = {"pwritev2", {INT, ADDR, INT, LINT, INT, NONE, LINT}, &syscall32_generic_handler},
[376] = {"pkey_mprotect", {ADDR, ULINT, INT, INT, NONE, NONE, INT}, &syscall32_generic_handler},
[377] = {"pkey_alloc", {UINT, UINT, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[378] = {"pkey_free", {INT, NONE, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[379] = {"statx", {INT, STR, INT, UINT, ADDR, NONE, INT}, &syscall32_generic_handler},
[380] = {"arch_prctl", {INT, ADDR, NONE, NONE, NONE, NONE, INT}, &syscall32_generic_handler},
[381] = {"io_pgetevents", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
[382] = {"rseq", {NONE, NONE, NONE, NONE, NONE, NONE, LLINT}, &syscall32_generic_handler}, // Failed to retrieve prototype
