#include <stdio.h>

# 1 
void func0(uint param_1,long param_2){byte bVar1;undefined4 local_1c;undefined local_11;undefined4 local_10;undefined4 local_c;*(undefined *)(param_2 + 8) = 0;local_10 = 7;local_c = 8;local_1c = param_1;while (local_c != 0) {bVar1 = (byte)local_1c & 0xf;if (bVar1 < 10) {local_11 = bVar1 + 0x30;}else {local_11 = bVar1 + 0x37;}*(char *)((ulong)local_10 + param_2) = local_11;local_10 = local_10 - 1;local_1c = local_1c >> 4;local_c = local_c + -1;}return;}