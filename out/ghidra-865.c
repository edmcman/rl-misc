#include <stdio.h>

# 1 
void func0(int param_1,undefined *param_2){int local_1c;int local_c;if (param_1 < 1) {*param_2 = 0x2d;local_1c = -param_1;}else {*param_2 = 0x2b;local_1c = param_1;}for (local_c = 10; 0 < local_c; local_c = local_c + -1) {param_2[local_c] = (char)local_1c + (char)(local_1c / 10) * -10 + '0';local_1c = local_1c / 10;}param_2[0xb] = 0;return;}