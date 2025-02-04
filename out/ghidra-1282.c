#include <stdio.h>

#include <stdlib.h>

# 1 
undefined8 func0(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,int *param_7){int iVar1;int iVar2;undefined8 uVar3;int local_18;int local_14;*param_7 = *param_7 + 1;iVar1 = param_3 / param_4 + -1;if (param_1 == param_2 + 1) {*param_5 = param_2;*param_6 = iVar1;uVar3 = 1;}else {local_18 = param_2 + 1;for (local_14 = 1; local_14 <= param_4; local_14 = local_14 + 1) {iVar2 = iVar1 + local_18 + 1;if (param_1 == iVar2) {*param_5 = param_2;*param_6 = iVar1;return 1;}if ((local_18 < param_1) && (param_1 < iVar2)) {uVar3 = func0(param_1,local_18,iVar1,param_4,param_5,param_6,param_7);return uVar3;}local_18 = iVar2;}*param_5 = -1;*param_6 = -1;uVar3 = 0;}return uVar3;}