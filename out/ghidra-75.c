#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

# 1 
void func0(long param_1,uint param_2,int param_3){uint uVar1;uint local_14;uint local_10;local_14 = 0;uVar1 = param_3 - 1;while (local_10 = uVar1, local_14 < local_10) {uVar1 = local_10 + local_14 >> 1;if (*(uint *)(param_1 + (ulong)uVar1 * 4) < param_2) {local_14 = uVar1 + 1;uVar1 = local_10;}}*(uint *)((ulong)local_10 * 4 + param_1) = param_2;return;}