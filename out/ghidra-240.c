#include <stdio.h>

#include <stddef.h>

#include <stdlib.h>

#include <string.h>

# 1 
void func0(long param_1,int param_2,int param_3,int param_4,int param_5,int *param_6){int local_28;int local_14;int local_10;int local_c;local_c = 0;local_10 = *(int *)(param_1 + (long)param_3 * 4);local_28 = param_3;local_14 = param_3;while (local_10 < param_5) {if (local_10 < param_4) {local_28 = local_28 + 1;}else {local_c = local_c + 1;}local_14 = local_14 + 1;if (param_2 < local_14) {local_10 = param_5 + 1;}else {local_10 = *(int *)(param_1 + (long)local_14 * 4);}}*param_6 = local_c;param_6[1] = local_28;return;}