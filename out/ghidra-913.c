#include <stdio.h>

#include <math.h>

#include <float.h>

#include <string.h>

#include <stdlib.h>

#include <errno.h>

# 1 
void func0(undefined *param_1,int param_2){long in_FS_OFFSET;int local_34;char *local_30;int local_20;char acStack_19 [9];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);*param_1 = 0x65;if (param_2 < 0) {param_1[1] = 0x2d;local_34 = -param_2;}else {param_1[1] = 0x2b;local_34 = param_2;}local_30 = param_1 + 2;local_20 = 0;for (; local_34 != 0; local_34 = local_34 / 10) {acStack_19[local_20] = (char)local_34 + (char)(local_34 / 10) * -10 + '0';local_20 = local_20 + 1;}while (local_20 < 1) {acStack_19[local_20] = '0';local_20 = local_20 + 1;}while (0 < local_20) {local_20 = local_20 + -1;*local_30 = acStack_19[local_20];local_30 = local_30 + 1;}*local_30 = '\0';if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {return;}/* WARNING: Subroutine does not return */__stack_chk_fail();}