#include <stdio.h>

#include <stdlib.h>

# 1 
int func0(int param_1,int *param_2){int iVar1;int iVar2;*param_2 = *param_2 + 1;if ((param_1 == 0) || (param_1 == 1)) {iVar2 = 1;}else {iVar1 = func0(param_1 + -1,param_2);iVar2 = func0(param_1 / 2,param_2);iVar2 = iVar2 + iVar1;}return iVar2;}