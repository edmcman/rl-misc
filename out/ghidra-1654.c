#include <string.h>

#include <ctype.h>

#include <stdio.h>

# 1 
int func0(long param_1,int param_2,int param_3,int *param_4){uint uVar1;undefined4 local_24;undefined4 local_10;local_10 = 0;local_24 = param_2;while (((local_24 < param_3 && (uVar1 = (uint)*(byte *)(param_1 + local_24), 0x2f < uVar1)) &&(uVar1 < 0x3a))) {local_10 = uVar1 + local_10 * 10 + -0x30;local_24 = local_24 + 1;}if (param_4 != (int *)0x0) {*param_4 = local_10;}return local_24;}