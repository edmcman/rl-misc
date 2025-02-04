#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
void func0(long param_1){undefined4 uVar1;undefined4 uVar2;undefined4 uVar3;undefined4 uVar4;undefined4 uVar5;undefined4 uVar6;long lVar7;long in_FS_OFFSET;lVar7 = *(long *)(in_FS_OFFSET + 0x28);uVar1 = *(undefined4 *)(param_1 + 4);uVar2 = *(undefined4 *)(param_1 + 8);uVar3 = *(undefined4 *)(param_1 + 0x18);uVar4 = *(undefined4 *)(param_1 + 0xc);uVar5 = *(undefined4 *)(param_1 + 0x1c);uVar6 = *(undefined4 *)(param_1 + 0x2c);*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x10);*(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x20);*(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x30);*(undefined4 *)(param_1 + 0x10) = uVar1;*(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x24);*(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x34);*(undefined4 *)(param_1 + 0x20) = uVar2;*(undefined4 *)(param_1 + 0x24) = uVar3;*(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x38);*(undefined4 *)(param_1 + 0x30) = uVar4;*(undefined4 *)(param_1 + 0x34) = uVar5;*(undefined4 *)(param_1 + 0x38) = uVar6;if (lVar7 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}