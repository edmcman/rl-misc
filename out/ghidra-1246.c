#include <stdarg.h>

# 1 
void func0(ulong param_1,char *param_2){char cVar1;long in_FS_OFFSET;char *local_58;ulong local_50;int local_3c;char local_38 [40];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);local_38[0] = '\0';local_50 = param_1;for (local_3c = 1; local_3c < 0x21; local_3c = local_3c + 1) {if ((local_50 & 1) == 0) {cVar1 = '0';}else {cVar1 = '1';}local_38[local_3c] = cVar1;local_50 = (long)local_50 >> 1;}for (local_3c = 0x20; local_38[local_3c] == '0'; local_3c = local_3c + -1) {}local_58 = param_2;if (local_3c == 0) {local_58 = param_2;local_3c = 1;}while (-1 < local_3c) {*local_58 = local_38[local_3c];local_58 = local_58 + 1;local_3c = local_3c + -1;}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}