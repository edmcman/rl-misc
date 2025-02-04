#include <stdio.h>

# 1 
int func0(int param_1,int param_2,int *param_3,int *param_4){int iVar1;if (param_2 == 0) {*param_3 = 1;*param_4 = 0;iVar1 = param_1;}else {iVar1 = func0(param_2,(long)param_1 % (long)param_2 & 0xffffffff,param_4,param_3);*param_4 = *param_4 - (param_1 / param_2) * *param_3;}return iVar1;}