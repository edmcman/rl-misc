#include <stdint.h>

#include <time.h>

#include <sys/time.h>

#include <sys/syscall.h>

#include <asm/vsyscall.h>

# 1 
char * func0(long param_1,char *param_2){char *pcVar1;long local_20;char *local_18;long local_10;local_20 = param_1;local_18 = param_2;if (param_1 < 0) {local_18 = param_2 + 1;*param_2 = '-';local_20 = -param_1;}local_10 = local_20;pcVar1 = local_18;do {local_18 = pcVar1;local_10 = local_10 / 10;pcVar1 = local_18 + 1;} while (local_10 != 0);local_18[1] = '\0';do {*local_18 = (char)local_20 + (char)(local_20 / 10) * -10 + '0';local_20 = local_20 / 10;local_18 = local_18 + -1;} while (local_20 != 0);return param_2;}