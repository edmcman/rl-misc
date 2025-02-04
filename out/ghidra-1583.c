#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(uint *param_1,uint *param_2){*param_1 = *param_1 ^ *param_2;*param_2 = *param_2 ^ *param_1;*param_1 = *param_1 ^ *param_2;return;}