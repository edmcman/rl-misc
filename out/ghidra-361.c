#include <stdarg.h>

#include <sys/types.h>

#include <sys/param.h>

# 1 
void func0(undefined *param_1,uint param_2,undefined *param_3){undefined *local_30;uint local_24;int local_c;*param_1 = 0;local_24 = param_2;for (local_c = 1; local_c < 0xc; local_c = local_c + 1) {param_1[local_c] = ((byte)local_24 & 7) + 0x30;local_24 = local_24 >> 3;}param_1[0xb] = param_1[0xb] & 0x33;for (local_c = 0xb; param_1[local_c] == '0'; local_c = local_c + -1) {}local_30 = param_3;if (local_c == 0) {local_30 = param_3;local_c = 1;}while (-1 < local_c) {*local_30 = param_1[local_c];local_30 = local_30 + 1;local_c = local_c + -1;}return;}