#include <math.h>

# 1 
void func0(int *param_1,int param_2,int param_3){int iVar1;if (*param_1 < 0) {*param_1 = *param_1 + param_3;if (*param_1 < 0) {if (param_2 < 0) {iVar1 = -1;}else {iVar1 = 0;}*param_1 = iVar1;}}else if (param_3 <= *param_1) {if (param_2 < 0) {param_3 = param_3 + -1;}*param_1 = param_3;}return;}