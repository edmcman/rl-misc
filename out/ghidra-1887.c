#include <stdlib.h>

#include <string.h>

# 1 
int func0(long param_1,int param_2){int iVar1;byte bVar2;undefined4 local_24;undefined local_d;undefined4 local_c;local_c = 0;local_24 = param_2;do {bVar2 = (byte)(local_24 >> 0x1f);local_d = ((char)local_24 + (bVar2 >> 1) & 0x7f) - (bVar2 >> 1);if (local_24 < 0) {local_24 = local_24 + 0x7f;}local_24 = local_24 >> 7;if (0 < local_24) {local_d = local_d | 0x80;}iVar1 = local_c + 1;*(byte *)(local_c + param_1) = local_d;local_c = iVar1;} while (0 < local_24);return iVar1;}