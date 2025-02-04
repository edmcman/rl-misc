#include <ctype.h>

#include <string.h>

#include <stdlib.h>

#include <float.h>

#include <math.h>

# 1 
undefined8 func0(int param_1,byte *param_2){byte bVar1;byte bVar2;byte bVar3;undefined8 uVar4;bVar1 = (byte)param_1;if (param_1 < 0) {if (param_2 != (byte *)0x0) {*param_2 = -bVar1;}uVar4 = 1;}else if (param_1 < 0x80) {if (param_2 != (byte *)0x0) {*param_2 = bVar1;}uVar4 = 1;}else {bVar2 = (byte)(param_1 >> 6);if (param_1 < 0x800) {if (param_2 != (byte *)0x0) {*param_2 = bVar2 | 0xc0;param_2[1] = bVar1 & 0x3f | 0x80;}uVar4 = 2;}else {bVar3 = (byte)(param_1 >> 0xc);if (param_1 < 0x10000) {if (param_2 != (byte *)0x0) {*param_2 = bVar3 | 0xe0;param_2[1] = bVar2 & 0x3f | 0x80;param_2[2] = bVar1 & 0x3f | 0x80;}uVar4 = 3;}else if (param_1 < 0x110000) {if (param_2 != (byte *)0x0) {*param_2 = (byte)(param_1 >> 0x12) | 0xf0;param_2[1] = bVar3 & 0x3f | 0x80;param_2[2] = bVar2 & 0x3f | 0x80;param_2[3] = bVar1 & 0x3f | 0x80;}uVar4 = 4;}else {uVar4 = 0;}}}return uVar4;}