#include <stdio.h>

# 1 
void func0(int *param_1,int *param_2,int *param_3){int iVar1;if (*param_2 < *param_1) {iVar1 = *param_1;*param_1 = *param_2;*param_2 = iVar1;}if (*param_3 < *param_1) {iVar1 = *param_1;*param_1 = *param_3;*param_3 = iVar1;}if (*param_3 < *param_2) {iVar1 = *param_2;*param_2 = *param_3;*param_3 = iVar1;}return;}