#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
void func0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8){int iVar1;long in_FS_OFFSET;int local_38;int local_34;int local_30;int aiStack_28 [6];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);aiStack_28[1] = param_1;aiStack_28[2] = param_2;aiStack_28[3] = param_3;aiStack_28[4] = param_4;for (local_34 = 2; local_34 < 5; local_34 = local_34 + 1) {for (local_38 = 1; local_38 < local_34; local_38 = local_38 + 1) {if (aiStack_28[local_34] < aiStack_28[local_38]) {iVar1 = aiStack_28[local_34];for (local_30 = local_34; local_38 < local_30; local_30 = local_30 + -1) {aiStack_28[local_30] = aiStack_28[local_30 + -1];}aiStack_28[local_38] = iVar1;}}}*param_5 = aiStack_28[1];*param_6 = aiStack_28[2];*param_7 = aiStack_28[3];*param_8 = aiStack_28[4];if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}