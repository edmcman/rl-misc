#include <stdio.h>

#include <stdlib.h>

# 1 
int func0(int param_1,int param_2,int *param_3,int *param_4){int iVar1;long in_FS_OFFSET;int local_1c;int local_18;int local_14;long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);if (param_1 == 0) {*param_3 = 0;*param_4 = 1;iVar1 = param_2;}else {iVar1 = func0((long)param_2 % (long)param_1 & 0xffffffff,param_1,&local_1c,&local_18);*param_3 = local_18 - local_1c * (param_2 / param_1);*param_4 = local_1c;local_14 = iVar1;}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return iVar1;}