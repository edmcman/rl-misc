#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(long param_1,int *param_2){int iVar1;iVar1 = *(int *)(param_1 + (long)*param_2 * 4);*param_2 = *param_2 + -1;*(int *)((long)*param_2 * 4 + param_1) = *(int *)(param_1 + (long)*param_2 * 4) - iVar1;return;}