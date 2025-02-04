#include <stdio.h>

# 1 
int func0(int *param_1,int *param_2){int iVar1;iVar1 = *param_2;if (*param_2 < *param_1) {iVar1 = *param_1;}*param_1 = iVar1;*param_2 = 0;return *param_1;}