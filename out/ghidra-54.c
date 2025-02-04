#include <stdio.h>

# 1 
void func0(long param_1){long in_FS_OFFSET;int local_80;int local_7c;undefined auStack_78 [104];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);for (local_7c = 0; *(char *)(param_1 + local_7c) != '\0'; local_7c = local_7c + 1) {auStack_78[local_7c] = *(undefined *)(param_1 + local_7c);}for (local_80 = 0; local_80 < local_7c; local_80 = local_80 + 1) {*(undefined *)(local_80 + param_1) = auStack_78[local_7c - (local_80 + 1)];}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}