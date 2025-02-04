#include <stdio.h>

#include <stdlib.h>

#include <assert.h>

# 1 
int func0(int *param_1,int *param_2,long param_3,int param_4,int param_5){int local_c;*param_1 = 0;local_c = 0;while ((local_c < param_5 && (*(int *)(param_3 + (long)local_c * 4) + *param_1 <= param_4))) {*param_1 = *param_1 + *(int *)(param_3 + (long)local_c * 4);local_c = local_c + 1;}*param_2 = *param_1 + *(int *)(param_3 + (long)local_c * 4);return local_c;}