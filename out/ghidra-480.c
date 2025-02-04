#include <stdlib.h>

# 1 
void func0(int *param_1,int param_2){*param_1 = param_2 * 3;param_1[1] = param_2 * 3 + 1;param_1[2] = (param_2 + 1) * 2;param_1[3] = param_2 + 3;param_1[4] = 3;param_1[5] = 3 - param_2;param_1[6] = param_2 * -2 + 2;param_1[7] = param_2 * -3 + 1;param_1[8] = param_2 * -3;param_1[9] = param_2 * -3 + -1;param_1[10] = (param_2 + 1) * -2;param_1[0xb] = -3 - param_2;param_1[0xc] = -3;param_1[0xd] = param_2 + -3;param_1[0xe] = (param_2 + -1) * 2;param_1[0xf] = param_2 * 3 + -1;return;}