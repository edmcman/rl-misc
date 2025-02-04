#include <stdio.h>

# 1 
uint func0(uint *param_1,byte param_2,uint param_3){uint uVar1;uVar1 = (int)*param_1 >> 0xf & 1;*param_1 = uVar1 << (param_2 & 0x1f) ^ *param_1 * 2 ^ uVar1 ^ param_3;return uVar1;}