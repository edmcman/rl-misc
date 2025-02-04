#include <stdio.h>

#include <string.h>

#include <wchar.h>

#include <stdlib.h>

# 1 
int func0(byte *param_1,uint *param_2){byte bVar1;int local_14;int local_10;uint local_c;bVar1 = *param_1;if (bVar1 < 0xc0) {*param_2 = (uint)bVar1;local_10 = 1;}else {if ((bVar1 & 0xe0) == 0xc0) {local_10 = 2;local_c = bVar1 & 0x1f;}else if ((bVar1 & 0xf0) == 0xe0) {local_10 = 3;local_c = bVar1 & 0xf;}else if ((bVar1 & 0xf8) == 0xf0) {local_10 = 4;local_c = bVar1 & 7;}else if ((bVar1 & 0xfc) == 0xf8) {local_10 = 5;local_c = bVar1 & 3;}else {if ((bVar1 & 0xfe) != 0xfc) {*param_2 = (uint)bVar1;return 1;}local_10 = 6;local_c = bVar1 & 1;}for (local_14 = 1; local_14 < local_10; local_14 = local_14 + 1) {if (((int)(char)param_1[local_14] & 0xc0U) != 0x80) {*param_2 = (uint)bVar1;return 1;}local_c = local_c << 6 | param_1[local_14] & 0x3f;}*param_2 = local_c;}return local_10;}