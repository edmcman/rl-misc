#include <stdio.h>

# 1 
void func0(char param_1,uint *param_2,int param_3){*param_2 = param_3 << (param_1 - 1U & 0x1f) | *param_2;return;}