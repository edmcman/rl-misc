#include <stdio.h>

# 1 
void func0(uint param_1,int *param_2){if ((param_1 & 1) == 0) {*param_2 = (int)param_1 / 2;param_2[1] = (int)param_1 / 2 + 0x10;}else {*param_2 = (int)param_1 / 2 + 0x10;param_2[1] = (int)param_1 / 2;}return;}