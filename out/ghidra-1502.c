#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
void func0(long param_1){bool bVar1;int iVar2;int iVar3;long in_FS_OFFSET;int local_48;int local_44;int local_40;float local_38 [10];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);for (local_48 = 0; local_48 < 9; local_48 = local_48 + 1) {local_38[local_48] = 0.0;}for (local_48 = 0; local_48 < 9; local_48 = local_48 + 1) {bVar1 = true;iVar2 = local_48;while (iVar3 = iVar2, local_44 = iVar3 + -1, -1 < local_44) {iVar2 = local_44;if ((bVar1) &&(iVar2 = local_44, local_38[local_44] < *(float *)(param_1 + (long)local_48 * 4))) {iVar2 = local_48;if (local_44 == local_48 + -1) {local_38[local_48] = *(float *)(param_1 + (long)local_48 * 4);bVar1 = false;iVar2 = local_44;}else {while (local_40 = iVar2 + -1, local_44 < local_40) {local_38[iVar2] = local_38[local_40];iVar2 = local_40;}local_38[iVar3] = *(float *)(param_1 + (long)local_48 * 4);bVar1 = false;iVar2 = local_44;}}}iVar2 = local_48;if (bVar1) {while (local_40 = iVar2 + -1, -1 < local_40) {local_38[iVar2] = local_38[local_40];iVar2 = local_40;}local_38[0] = *(float *)(param_1 + (long)local_48 * 4);}}if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {return;}/* WARNING: Subroutine does not return */__stack_chk_fail();}