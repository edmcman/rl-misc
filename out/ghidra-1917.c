#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
long func0(long param_1){byte bVar1;byte bVar2;byte *pbVar3;undefined4 local_10;undefined4 local_c;for (local_10 = 0; local_c = local_10, local_10 < 4; local_10 = local_10 + 1) {while (local_c = local_c + 1, local_c < 4) {bVar1 = *(byte *)(param_1 + (local_c + local_10 * 5));bVar2 = *(byte *)(param_1 + (local_10 + local_c * 5));pbVar3 = (byte *)(param_1 + (local_10 + local_c * 5));*pbVar3 = *(byte *)((local_c + local_10 * 5) + param_1);*(byte *)(param_1 + (local_c + local_10 * 5)) = bVar1 ^ bVar2 ^ *pbVar3;}}return param_1;}