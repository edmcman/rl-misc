#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

# 1 
void func0(long param_1,long param_2,ulong param_3){ushort uVar1;undefined8 local_10;for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {uVar1 = *(ushort *)(param_1 + local_10 * 2);*(ushort *)(param_2 + local_10 * 2) = uVar1 >> 8 | uVar1 << 8;}return;}