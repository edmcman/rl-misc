#include <time.h>

#include <math.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
int func0(float param_1,float *param_2,int param_3){int iVar1;int iVar2;int iVar3;int local_1c;int local_18;local_1c = 0;if (param_1 <= *param_2) {iVar3 = local_1c;iVar1 = param_3 + -1;if (param_2[(long)param_3 + -1] <= param_1) {while ((((local_18 = iVar1, local_1c = iVar3, iVar3 = local_1c, local_1c < local_18 &&(iVar2 = (local_18 + local_1c) / 2, iVar3 = iVar2, param_2[iVar2] != param_1)) &&(iVar3 = local_1c, local_18 != iVar2)) && (local_1c != iVar2))) {iVar1 = iVar2;if ((param_1 <= param_2[iVar2]) &&(iVar3 = iVar2, iVar1 = local_18, param_2[iVar2] <= param_1)) {iVar3 = local_1c;}}}else {iVar3 = -2;}}else {iVar3 = -1;}return iVar3;}