#include <stdio.h>

# 1 
uint func0(uint *param_1,byte param_2){*param_1 = *param_1 & ~(1 << (param_2 & 0x1f));return *param_1;}