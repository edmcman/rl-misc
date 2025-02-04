#include <stdio.h>

#include <stddef.h>

#include <string.h>

#include <stdlib.h>

#include <errno.h>

# 1 
int func0(byte *param_1,int param_2){byte bVar1;byte bVar2;byte bVar3;byte bVar4;byte bVar5;int local_c;bVar5 = (byte)param_2;if (param_2 < 0x80) {*param_1 = bVar5;local_c = 1;}else {bVar1 = (byte)(param_2 >> 6);if (param_2 < 0x800) {*param_1 = bVar1 | 0xc0;param_1[1] = bVar5 & 0x3f | 0x80;local_c = 2;}else {bVar2 = (byte)(param_2 >> 0xc);if (param_2 < 0x10000) {*param_1 = bVar2 | 0xe0;param_1[1] = bVar1 & 0x3f | 0x80;param_1[2] = bVar5 & 0x3f | 0x80;local_c = 3;}else {bVar3 = (byte)(param_2 >> 0x12);if (param_2 < 0x200000) {*param_1 = bVar3 | 0xf0;param_1[1] = bVar2 & 0x3f | 0x80;param_1[2] = bVar1 & 0x3f | 0x80;param_1[3] = bVar5 & 0x3f | 0x80;local_c = 4;}else {bVar4 = (byte)((uint)param_2 >> 0x18);if (param_2 < 0x4000000) {*param_1 = bVar4 | 0xf8;param_1[1] = bVar3 & 0x3f | 0x80;param_1[2] = bVar2 & 0x3f | 0x80;param_1[3] = bVar1 & 0x3f | 0x80;param_1[4] = bVar5 & 0x3f | 0x80;local_c = 5;}else {*param_1 = (char)bVar4 >> 6 | 0xfc;param_1[1] = bVar4 & 0x3f | 0x80;param_1[2] = bVar3 & 0x3f | 0x80;param_1[3] = bVar2 & 0x3f | 0x80;param_1[4] = bVar1 & 0x3f | 0x80;param_1[5] = bVar5 & 0x3f | 0x80;local_c = 6;}}}}}param_1[local_c] = 0;return local_c;}