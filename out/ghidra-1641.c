#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(long param_1){long in_FS_OFFSET;int local_48;int local_44;int local_40;int local_3c;undefined4 auStack_38 [10];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);for (local_48 = 0; local_48 < 3; local_48 = local_48 + 1) {for (local_44 = 0; local_44 < 3; local_44 = local_44 + 1) {auStack_38[(long)local_48 * 3 + (long)(2 - local_44)] =*(undefined4 *)((long)local_44 * 0xc + param_1 + (long)local_48 * 4);}}for (local_40 = 0; local_40 < 3; local_40 = local_40 + 1) {for (local_3c = 0; local_3c < 3; local_3c = local_3c + 1) {*(undefined4 *)((long)local_40 * 0xc + param_1 + (long)local_3c * 4) =auStack_38[(long)local_40 * 3 + (long)local_3c];}}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}