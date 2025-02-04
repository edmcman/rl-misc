#include <stdio.h>

#include <string.h>

#include <stdlib.h>

# 1 
void func0(long param_1,long param_2){int iVar1;undefined4 uVar2;undefined4 local_18;undefined4 local_14;for (local_18 = 1; local_18 < 0x10; local_18 = local_18 + 1) {iVar1 = *(int *)(param_1 + (long)local_18 * 4);uVar2 = *(undefined4 *)(param_2 + (long)local_18 * 4);local_14 = local_18;while ((0 < local_14 && (iVar1 < *(int *)(param_1 + (long)local_14 * 4 + -4)))) {*(undefined4 *)(param_1 + (long)local_14 * 4) =*(undefined4 *)(param_1 + (long)local_14 * 4 + -4);*(undefined4 *)(param_2 + (long)local_14 * 4) =*(undefined4 *)(param_2 + (long)local_14 * 4 + -4);local_14 = local_14 + -1;}*(int *)((long)local_14 * 4 + param_1) = iVar1;*(undefined4 *)((long)local_14 * 4 + param_2) = uVar2;}return;}