#include <unistd.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <stdarg.h>

#include <sys/sysinfo.h>

# 1 
void func0(char *param_1){char *local_10;local_10 = param_1;if (param_1 != (char *)0x0) {for (; *local_10 != '\0'; local_10 = local_10 + 1) {if (('`' < *local_10) && (*local_10 < '{')) {*local_10 = *local_10 + -0x20;}}}return;}