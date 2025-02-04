#include <ctype.h>

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

# 1 
undefined4 func0(byte *param_1,uint param_2){byte *pbVar1;byte *pbVar2;byte bVar3;undefined4 local_18;local_18 = 0;bVar3 = (byte)param_2;if (param_2 < 0x80) {*param_1 = bVar3;local_18 = 1;}else if (param_2 < 0x800) {*param_1 = 0xc0;pbVar1 = param_1 + 1;*param_1 = (byte)(param_2 >> 6) & 0x1f | *param_1;*pbVar1 = 0x80;*pbVar1 = *pbVar1 | bVar3 & 0x3f;local_18 = 2;}else if (param_2 < 0x10000) {*param_1 = 0xe0;pbVar1 = param_1 + 1;*param_1 = (byte)(param_2 >> 0xc) & 0xf | *param_1;*pbVar1 = 0x80;param_1 = param_1 + 2;*pbVar1 = (byte)(param_2 >> 6) & 0x3f | *pbVar1;*param_1 = 0x80;*param_1 = *param_1 | bVar3 & 0x3f;local_18 = 3;}else if (param_2 < 0x200000) {*param_1 = 0xe0;pbVar1 = param_1 + 1;*param_1 = (byte)(param_2 >> 0x12) & 7 | *param_1;*pbVar1 = 0x80;pbVar2 = param_1 + 2;*pbVar1 = (byte)(param_2 >> 0xc) & 0x3f | *pbVar1;*pbVar2 = 0x80;param_1 = param_1 + 3;*pbVar2 = (byte)(param_2 >> 6) & 0x3f | *pbVar2;*param_1 = 0x80;*param_1 = *param_1 | bVar3 & 0x3f;local_18 = 4;}return local_18;}