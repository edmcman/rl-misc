#include <stdio.h>

#include <string.h>

#include <math.h>

#include <ctype.h>

#include <stdlib.h>

# 1 
void func0(long param_1,byte param_2,uint param_3){uint uVar1;undefined4 local_28;undefined4 local_10;local_28 = param_3;for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {uVar1 = (uint)*(undefined8 *)(param_1 + (long)local_10 * 8);*(ulong *)(param_1 + (long)local_10 * 8) = (ulong)(uVar1 << (param_2 & 0x1f) | local_28);local_28 = uVar1 >> (0x20 - param_2 & 0x1f);}return;}