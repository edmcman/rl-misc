#include <math.h>

#include <assert.h>

#include <string.h>

#include <stdio.h>

# 1 
int func0(double *param_1,int *param_2){int iVar1;iVar1 = *param_2;*param_2 = iVar1 + 1;if (iVar1 < 0x10) {iVar1 = (int)*param_1 + 0x30;*param_1 = DAT_00100078 * (*param_1 - (double)(int)*param_1);}else {iVar1 = 0x30;}return iVar1;}