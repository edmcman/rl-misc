#include <assert.h>

#include <float.h>

#include <limits.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void func0(int *param_1,int param_2,int param_3,long *param_4){int iVar1;int iVar2;iVar1 = 1;if (0 < param_2) {iVar1 = param_2;}iVar2 = 1;if (0 < param_3) {iVar2 = param_3;}if (*param_1 <= param_2) {param_2 = *param_1 + -1;}if (param_1[1] <= param_3) {param_3 = param_1[1] + -1;}*param_4 = (long)param_1[2] * ((long)(iVar1 + -1) + (long)*param_1 * (long)(iVar2 + -1));param_4[1] = (long)param_1[2] * ((long)*param_1 * (long)param_3 + (long)(iVar1 + -1));param_4[2] = (long)param_1[2] * ((long)*param_1 * (long)(iVar2 + -1) + (long)param_2);param_4[3] = (long)param_1[2] * ((long)*param_1 * (long)param_3 + (long)param_2);return;}