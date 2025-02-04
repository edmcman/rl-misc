#include <stdio.h>

#include <string.h>

#include <errno.h>

# 1 
bool func0(int *param_1,long param_2,int param_3,undefined param_4){int iVar1;int iVar2;iVar1 = *param_1;if (iVar1 < param_3) {iVar2 = *param_1;*param_1 = iVar2 + 1;*(undefined *)(iVar2 + param_2) = param_4;}return iVar1 < param_3;}