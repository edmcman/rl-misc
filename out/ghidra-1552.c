#include <stdio.h>

#include <stdlib.h>

#include <string.h>             /* memset, strlen */

#include <ctype.h>

#include <errno.h>

#include <math.h>

#include <fcntl.h>

#include <unistd.h>

# 1 
int func0(byte *param_1,uint param_2){int local_c;if (param_2 < 0x80) {*param_1 = (byte)param_2;local_c = 1;}else {if (param_2 < 0x800) {local_c = 1;*param_1 = (byte)(param_2 >> 6) | 0xc0;}else {*param_1 = (byte)(param_2 >> 0xc) | 0xe0;local_c = 2;param_1[1] = (byte)(param_2 >> 6) & 0x3f | 0x80;}param_1[local_c] = (byte)param_2 & 0x3f | 0x80;local_c = local_c + 1;}param_1[local_c] = 0;return local_c;}