#include <stdio.h>

# 1 
void func0(long param_1){long in_FS_OFFSET;int local_24;int local_20;undefined4 local_1c [3];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);local_24 = 0;local_1c[0] = 3;local_1c[1] = 1;local_1c[2] = 2;for (local_20 = 0; *(char *)(param_1 + local_20) != '\0'; local_20 = local_20 + 1) {*(char *)(param_1 + local_20) = *(char *)(param_1 + local_20) + (char)local_1c[local_24];local_24 = local_24 + 1;if (local_24 == 3) {local_24 = 0;}}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}