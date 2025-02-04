#include <stdio.h>

#include <ctype.h>

#include <stdlib.h>

#include <stdbool.h>

# 1 
void func0(int *param_1,long param_2,int *param_3){int local_18;int local_14;int local_10;int local_c;local_18 = 0;*param_3 = 0;local_14 = *param_1;local_10 = 1;for (local_c = 1; local_c < 5; local_c = local_c + 1) {if (local_14 == param_1[local_c]) {local_10 = local_10 + 1;}else {if (1 < local_10) {*(int *)((long)local_18 * 4 + param_2) = local_10;*param_3 = *param_3 + local_10 * local_14;local_18 = local_18 + 1;}local_14 = param_1[local_c];local_10 = 1;}}if (1 < local_10) {*(int *)((long)local_18 * 4 + param_2) = local_10;*param_3 = *param_3 + local_10 * local_14;}return;}