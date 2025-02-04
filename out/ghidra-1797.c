#include <stdio.h>

# 1 
void func0(uint param_1,long param_2,int param_3,int param_4){undefined4 local_2c;undefined4 local_20;undefined4 local_14;local_14 = 0;local_2c = param_4;local_20 = param_3;while (local_20 < 0x20) {if ((param_1 & 0x80000000U >> ((byte)local_20 & 0x1f)) != 0) {*(byte *)(param_2 + local_14) =*(byte *)(param_2 + local_14) | (byte)(1 << (7U - (char)local_2c & 0x1f));}local_20 = local_20 + 1;local_2c = local_2c + 1;if (7 < local_2c) {local_2c = 2;local_14 = local_14 + 1;}}return;}