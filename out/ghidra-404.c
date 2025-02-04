#include <stdio.h>

#include <stdlib.h>

#include <assert.h>

# 1 
bool func0(uint param_1,uint param_2,uint *param_3){*param_3 = param_1;return (param_1 >> (param_2 & 0x1f) & 1) != 0;}