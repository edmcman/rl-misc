#include <math.h>

# 1 
void func0(float param_1,float *param_2,int *param_3,float *param_4,int param_5){int local_c;if (*param_4 < param_1) {for (local_c = 0; (param_4[local_c] < param_1 && (local_c < param_5 + -1));local_c = local_c + 1) {}if (param_1 <= (param_4[(long)local_c + -1] + param_4[local_c]) / DAT_0010012c) {*param_3 = local_c + -1;*param_2 = param_4[(long)local_c + -1];}else {*param_3 = local_c;*param_2 = param_4[local_c];}}else {*param_3 = 0;*param_2 = *param_4;}return;}