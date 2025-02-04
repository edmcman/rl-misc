#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <assert.h>

#include <ctype.h>

#include <math.h>

# 1 
uint func0(int param_1,int param_2,uint param_3,int *param_4){int iVar1;int iVar2;uint local_14;iVar1 = ((int)param_3 / 2) / param_1;iVar2 = ((int)param_3 / 2) % param_1;if ((param_3 & 1) == 0) {if (0 < iVar1) {*param_4 = param_3 + param_1 * -2;}local_14 = (uint)(0 < iVar1);if (0 < iVar2) {param_4[(int)local_14] = param_3 - 1;local_14 = local_14 + 1;}if (iVar2 + 1 < param_1) {param_4[(int)local_14] = param_3 + 1;local_14 = local_14 + 1;}if (iVar1 + 2 < param_2) {param_4[(int)local_14] = param_3 + param_1 * 2;local_14 = local_14 + 1;}if (0 < iVar2) {param_4[(int)local_14] = param_3 + param_1 * 2 + -1;local_14 = local_14 + 1;}if (iVar2 + 1 < param_1) {param_4[(int)local_14] = param_1 * 2 + param_3 + 1;local_14 = local_14 + 1;}}else {if (0 < iVar2) {*param_4 = param_3 - 2;}local_14 = (uint)(0 < iVar2);if (0 < iVar1) {param_4[(int)local_14] = param_3 + param_1 * -2 + -1;local_14 = local_14 + 1;}if (iVar1 + 1 < param_2) {param_4[(int)local_14] = param_3 - 1;local_14 = local_14 + 1;}if (iVar2 + 2 < param_1) {param_4[(int)local_14] = param_3 + 2;local_14 = local_14 + 1;}if (0 < iVar1) {param_4[(int)local_14] = param_3 + param_1 * -2 + 1;local_14 = local_14 + 1;}if (iVar1 + 1 < param_2) {param_4[(int)local_14] = param_3 + 1;local_14 = local_14 + 1;}}return local_14;}