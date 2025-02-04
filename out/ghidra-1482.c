#include <stdio.h>

# 1 
void func0(int *param_1,int *param_2,int param_3,int *param_4){int local_c;*param_2 = *param_4;*param_1 = *param_2;for (local_c = 0; local_c < param_3; local_c = local_c + 1) {if (param_4[local_c] <= *param_2) {*param_2 = param_4[local_c];}if (*param_1 <= param_4[local_c]) {*param_1 = param_4[local_c];}}return;}