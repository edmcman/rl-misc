#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(int *param_1,int *param_2){int iVar1;int iVar2;int iVar3;int iVar4;int iVar5;int iVar6;int iVar7;int iVar8;iVar1 = *param_1;iVar2 = param_2[1];iVar3 = param_2[3];iVar4 = *param_2;iVar5 = param_2[2];iVar6 = param_1[2];iVar7 = param_2[1];iVar8 = param_2[3];*param_1 = param_2[2] * param_1[1] + *param_1 * *param_2;param_1[1] = iVar3 * param_1[1] + iVar1 * iVar2;param_1[2] = iVar5 * param_1[3] + param_1[2] * iVar4;param_1[3] = iVar8 * param_1[3] + iVar6 * iVar7;return;}