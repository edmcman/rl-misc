#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <stdint.h>

#include <stdbool.h>

# 1 
void func0(int *param_1,int *param_2,uint *param_3){int iVar1;int iVar2;iVar1 = *param_1;iVar2 = *param_2;*param_3 = iVar2 + iVar1 & 0x7fffffff;param_3[1] = param_2[1] + (param_1[1] - (iVar2 + iVar1 >> 0x1f)) & 0x7fffffff;return;}