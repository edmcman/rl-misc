#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(long param_1,long param_2,int *param_3){long in_FS_OFFSET;int local_2c;double adStack_28 [3];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);for (local_2c = 0; local_2c < 3; local_2c = local_2c + 1) {adStack_28[local_2c] =(double)param_3[2] * *(double *)(param_2 + (long)local_2c * 0x18 + 0x10) +*(double *)(param_2 + (long)local_2c * 0x18) * (double)*param_3 +(double)param_3[1] * *(double *)(param_2 + (long)local_2c * 0x18 + 8);}for (local_2c = 0; local_2c < 3; local_2c = local_2c + 1) {*(double *)((long)local_2c * 8 + param_1) = adStack_28[local_2c];}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}