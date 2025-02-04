#include <errno.h>

#include <inttypes.h>

#include <limits.h>

#include <setjmp.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void func0(long param_1,long param_2){int iVar1;long in_FS_OFFSET;int local_e4;int local_e0;int local_dc;int local_d8 [50];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);local_e4 = 0;local_d8[0] = -1;local_e0 = -1;while (local_e4 < 0x2f) {for (; (-1 < local_e0 && (*(char *)(param_2 + local_e4) != *(char *)(param_2 + local_e0)));local_e0 = local_d8[local_e0]) {}local_e4 = local_e4 + 1;local_e0 = local_e0 + 1;iVar1 = local_e0;if (*(char *)(param_2 + local_e4) == *(char *)(param_2 + local_e0)) {iVar1 = local_d8[local_e0];}local_d8[local_e4] = iVar1;}for (local_e4 = 0; local_e4 < 0x30; local_e4 = local_e4 + 1) {for (local_dc = 0; local_dc < 2; local_dc = local_dc + 1) {iVar1 = local_e4;if (local_dc != *(char *)(param_2 + local_e4)) {iVar1 = local_d8[local_e4];}*(short *)((long)local_e4 * 4 + param_1 + (long)local_dc * 2) = (short)iVar1 + 1;}}if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {return;}/* WARNING: Subroutine does not return */__stack_chk_fail();}