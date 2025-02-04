#include <stdlib.h>

#include <stdio.h>

#include <stdarg.h>

#include <string.h>

#include <ctype.h>

#include <time.h>

# 1 
undefined8 func0(byte *param_1,int param_2){byte bVar1;byte bVar2;undefined8 uVar3;byte bVar4;bVar4 = (byte)param_2;if (param_2 < 0x80) {*param_1 = bVar4;uVar3 = 1;}else {bVar1 = (byte)(param_2 >> 6);if (param_2 < 0x800) {*param_1 = bVar1 & 0x1f | 0xc0;param_1[1] = bVar4 & 0x3f | 0x80;uVar3 = 2;}else {bVar2 = (byte)(param_2 >> 0xc);if (param_2 < 0x10000) {*param_1 = bVar2 & 0xf | 0xe0;param_1[1] = bVar1 & 0x3f | 0x80;param_1[2] = bVar4 & 0x3f | 0x80;uVar3 = 3;}else if (param_2 < 0x110000) {*param_1 = (byte)(param_2 >> 0x12) & 7 | 0xf0;param_1[1] = bVar2 & 0x3f | 0x80;param_1[2] = bVar1 & 0x3f | 0x80;param_1[3] = bVar4 & 0x3f | 0x80;uVar3 = 4;}else {uVar3 = 0;}}}return uVar3;}