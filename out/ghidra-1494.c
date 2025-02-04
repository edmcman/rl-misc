#include <stddef.h>   //for NULL

# 1 
void func0(undefined *param_1,int param_2){undefined *local_20;int local_10;int local_c;local_c = 0;local_10 = param_2;if (param_2 == 0) {*param_1 = 0x30;param_1[1] = 0;}else {for (; local_10 != 0; local_10 = local_10 / 10) {local_c = local_c + 1;}local_20 = param_1;local_10 = param_2;if (param_2 < 0) {local_20 = param_1 + 1;*param_1 = 0x2d;local_10 = -param_2;}local_20[local_c] = 0;for (; local_10 != 0; local_10 = local_10 / 10) {local_20[(long)local_c + -1] = (char)local_10 + (char)(local_10 / 10) * -10 + '0';local_c = local_c + -1;}}return;}