#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void func0(int *param_1,int *param_2,int *param_3,int param_4){int *piVar1;if (param_4 < 1) {*param_1 = *param_2 * *param_3;*param_1 = param_2[1] * param_3[1] + *param_1;piVar1 = param_1 + 1;*param_1 = *param_1 + param_2[2] * param_3[2];*piVar1 = param_2[3] * *param_3;*piVar1 = param_2[4] * param_3[1] + *piVar1;param_1 = param_1 + 2;*piVar1 = *piVar1 + param_2[5] * param_3[2];*param_1 = param_2[6] * *param_3;*param_1 = param_2[7] * param_3[1] + *param_1;*param_1 = *param_1 + param_3[2] * param_2[8];}else {*param_1 = *param_2 * *param_3;*param_1 = param_2[1] * param_3[1] + *param_1;*param_1 = param_2[2] * param_3[2] + *param_1;*param_1 = *param_1 % param_4;if (*param_1 < 0) {*param_1 = *param_1 + param_4;}piVar1 = param_1 + 1;*piVar1 = param_2[3] * *param_3;*piVar1 = param_2[4] * param_3[1] + *piVar1;*piVar1 = param_2[5] * param_3[2] + *piVar1;*piVar1 = *piVar1 % param_4;if (*piVar1 < 0) {*piVar1 = *piVar1 + param_4;}param_1 = param_1 + 2;*param_1 = param_2[6] * *param_3;*param_1 = param_2[7] * param_3[1] + *param_1;*param_1 = *param_1 + param_3[2] * param_2[8];*param_1 = *param_1 % param_4;if (*param_1 < 0) {*param_1 = *param_1 + param_4;}}return;}