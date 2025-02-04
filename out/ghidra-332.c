#include <stddef.h>

#include <stdio.h>

# 1 
void func0(long param_1,long param_2,long *param_3){long in_FS_OFFSET;long local_30;double adStack_28 [3];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);for (local_30 = 0; local_30 < 3; local_30 = local_30 + 1) {adStack_28[local_30] =(double)param_3[2] * *(double *)(param_2 + local_30 * 0x18 + 0x10) +*(double *)(param_2 + local_30 * 0x18) * (double)*param_3 +(double)param_3[1] * *(double *)(param_2 + local_30 * 0x18 + 8);}for (local_30 = 0; local_30 < 3; local_30 = local_30 + 1) {*(double *)(local_30 * 8 + param_1) = adStack_28[local_30];}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}