#include <math.h>

#include <float.h>

#include <stdbool.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

#include <stdio.h>

# 1 
void func0(long param_1,int param_2){long lVar1;ulong uVar2;undefined *puVar3;long in_FS_OFFSET;undefined auStack_48 [4];int local_44;long local_40;int local_30;int local_2c;int local_28;float local_24;long local_20;undefined *local_18;long local_10;local_40 = param_1;local_44 = param_2;local_10 = *(long *)(in_FS_OFFSET + 0x28);local_20 = (long)param_2 + -1;uVar2 = (((long)param_2 * 4 + 0xfU) / 0x10) * 0x10;for (puVar3 = auStack_48; puVar3 != auStack_48 + -(uVar2 & 0xfffffffffffff000);puVar3 = puVar3 + -0x1000) {*(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);}lVar1 = -(ulong)((uint)uVar2 & 0xfff);if ((uVar2 & 0xfff) != 0) {*(undefined8 *)(puVar3 + ((ulong)((uint)uVar2 & 0xfff) - 8) + lVar1) =*(undefined8 *)(puVar3 + ((ulong)((uint)uVar2 & 0xfff) - 8) + lVar1);}for (local_28 = 0; local_28 < local_44; local_28 = local_28 + 1) {*(undefined4 *)(puVar3 + (long)local_28 * 4 + lVar1) = 0;}for (local_28 = 0; local_28 < local_44; local_28 = local_28 + 1) {for (local_2c = local_28; local_2c < local_44; local_2c = local_2c + 1) {if (*(float *)(local_40 + (long)local_2c * 4) == *(float *)(local_40 + (long)local_28 * 4)) {*(float *)(puVar3 + (long)local_28 * 4 + lVar1) =DAT_00100220 + *(float *)(puVar3 + (long)local_28 * 4 + lVar1);}}}local_24 = *(float *)(puVar3 + lVar1);local_30 = 0;for (local_28 = 0; local_28 < local_44; local_28 = local_28 + 1) {if (local_24 < *(float *)(puVar3 + (long)local_28 * 4 + lVar1)) {local_30 = local_28;local_24 = *(float *)(puVar3 + (long)local_28 * 4 + lVar1);}}if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {return;}local_18 = puVar3 + lVar1;/* WARNING: Subroutine does not return */__stack_chk_fail();}