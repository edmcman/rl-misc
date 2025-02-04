#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

# 1 
void func0(uint *param_1,byte param_2){*param_1 = *param_1 & ~(1 << (param_2 & 0x1f));return;}