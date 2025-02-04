#include <stdio.h>

#include <sys/types.h>

#include <sys/uio.h>

#include <unistd.h>

# 1 
void func0(long param_1,uint param_2,int *param_3,int *param_4){undefined4 local_c;*param_3 = 1;*param_4 = 0;for (local_c = 0; local_c < param_2; local_c = local_c + 1) {if (*(char *)(param_1 + (ulong)local_c) == '\n') {*param_3 = *param_3 + 1;*param_4 = 0;}else {*param_4 = *param_4 + 1;}}return;}