#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(long param_1,long param_2,int *param_3){long in_FS_OFFSET;int local_20;int aiStack_1c [3];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);for (local_20 = 0; local_20 < 3; local_20 = local_20 + 1) {aiStack_1c[local_20] =*(int *)(param_2 + (long)local_20 * 0xc) * *param_3 +param_3[1] * *(int *)(param_2 + (long)local_20 * 0xc + 4) +param_3[2] * *(int *)(param_2 + (long)local_20 * 0xc + 8);}for (local_20 = 0; local_20 < 3; local_20 = local_20 + 1) {*(int *)((long)local_20 * 4 + param_1) = aiStack_1c[local_20];}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}