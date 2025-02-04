#include <stdio.h>

# 1 
void func0(int param_1,int *param_2,int *param_3){*param_3 = param_1 >> 1;if (param_1 % 3 == 0) {param_1 = param_1 / 3;}else {param_1 = param_1 / 3 + 1;}*param_2 = param_1;return;}