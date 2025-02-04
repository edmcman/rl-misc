#include <stdio.h>

# 1 
void func0(int *param_1,undefined4 *param_2){int local_10;int local_c;local_10 = *param_1;for (local_c = 1; local_c < 4; local_c = local_c + 1) {if (local_10 < param_1[local_c]) {local_10 = param_1[local_c];*param_2 = 0;param_2[1] = 0;param_2[2] = 0;param_2[3] = 0;param_2[local_c] = 1;}else if (local_10 == param_1[local_c]) {param_2[local_c] = 1;}}return;}