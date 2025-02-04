#include <assert.h>

#include <stdio.h>

#include <math.h>

#include <string.h>

#include <float.h>

#include <stdlib.h>

# 1 
void func0(int *param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,int param_6){*param_3 = 0xffffffff;if ((param_5 == *param_4) || (param_6 == *param_4)) {if ((param_5 == param_4[1]) || (param_6 == param_4[1])) {*param_3 = 0;*param_1 = *param_4;*param_2 = param_4[1];}else {*param_3 = 2;*param_1 = param_4[2];*param_2 = *param_4;}}else {*param_3 = 1;*param_1 = param_4[1];*param_2 = param_4[2];}return;}