#include <assert.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void func0(float param_1,float *param_2,int param_3){int iVar1;int local_18;int local_14;if ((((double)*param_2 - DAT_001001b8 <= (double)param_1) && (param_3 != 1)) &&((double)param_1 <= DAT_001001b8 + (double)param_2[(long)param_3 + -1])) {local_18 = 0;local_14 = param_3 + -1;while (local_18 <= local_14) {iVar1 = (local_14 + local_18) / 2;if (param_2[iVar1] <= param_1) {if (param_1 <= param_2[iVar1]) {return;}local_18 = iVar1 + 1;}else {local_14 = iVar1 + -1;}}}return;}