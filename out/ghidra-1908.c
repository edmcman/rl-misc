#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(long param_1){long in_FS_OFFSET;int local_30;int local_2c;undefined4 auStack_28 [6];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);local_2c = 0;for (local_30 = 0; local_30 < 4; local_30 = local_30 + 1) {auStack_28[local_30] = *(undefined4 *)(param_1 + (long)local_30 * 4);}for (local_30 = 4; 0 < local_30; local_30 = local_30 + -1) {*(undefined4 *)((long)local_30 * 4 + -4 + param_1) = auStack_28[local_2c];local_2c = local_2c + 1;}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}