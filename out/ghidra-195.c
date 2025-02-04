#include <stdio.h>

# 1 
uint func0(uint *param_1,byte param_2,byte param_3,uint param_4){uint uVar1;uVar1 = (int)*param_1 >> 7 & 1;*param_1 = uVar1 << (param_3 & 0x1f) ^ *param_1 * 2 ^ uVar1 << (param_2 & 0x1f) ^ uVar1 ^ param_4;return uVar1;}