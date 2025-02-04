#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

# 1 
void func0(long param_1){long in_FS_OFFSET;int local_2c;undefined4 auStack_28 [6];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {auStack_28[local_2c] = *(undefined4 *)(param_1 + (long)local_2c * 4);*(undefined4 *)(param_1 + (long)local_2c * 4) =*(undefined4 *)(param_1 + 0x30 + (long)local_2c * 4);*(undefined4 *)(param_1 + 0x30 + (long)local_2c * 4) = auStack_28[local_2c];}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}