#include <stdlib.h>

#include <stdio.h>

#include <time.h>

# 1 
void func0(int *param_1,int param_2){int local_10;int local_c;if (1 < param_2) {local_10 = 1;*param_1 = param_1[1];while (local_c = local_10 * 2, local_c <= param_2) {if ((local_c < param_2) && (param_1[local_c] < param_1[(long)local_c + 1])) {local_c = local_c + 1;}if (param_1[local_c] <= *param_1) break;param_1[local_10] = param_1[local_c];local_10 = local_c;}param_1[local_10] = *param_1;}return;}