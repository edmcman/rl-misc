#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
int func0(long param_1,int param_2,undefined4 *param_3){uint uVar1;undefined4 local_18;undefined4 local_14;undefined4 local_10;undefined4 local_c;local_18 = 1;local_14 = 0;local_10 = 0;do {if (param_2 <= local_10) {LAB_0010008b:if (param_3 != (undefined4 *)0x0) {*param_3 = local_18;}return local_14;}uVar1 = (uint)*(char *)(param_1 + local_10);if (((int)uVar1 < 0x30) || (0x39 < (int)uVar1)) {uVar1 = uVar1 & 0xffffffeb;if (((int)uVar1 < 0x41) || (0x46 < (int)uVar1)) {local_18 = 0;goto LAB_0010008b;}local_c = uVar1 - 0x37;}else {local_c = uVar1 - 0x30;}local_14 = local_c + local_14 * 0x10;local_10 = local_10 + 1;} while( true );}