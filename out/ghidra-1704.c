#include <stdio.h>

#include <math.h>

# 1 
void func0(uint param_1,uint *param_2,uint *param_3,uint *param_4){*param_2 = (int)param_1 >> 0x10 & 0xff;*param_3 = (int)param_1 >> 8 & 0xff;*param_4 = param_1 & 0xff;return;}