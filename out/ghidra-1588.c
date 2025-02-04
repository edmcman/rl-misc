#include <errno.h>

#include <fcntl.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <termios.h>

#include <unistd.h>

# 1 
undefined8 * func0(undefined8 *param_1,undefined8 param_2,int param_3){uint param_7;undefined4 uStack000000000000000c;uint param_8;uint uStack0000000000000014;undefined6 param_9;undefined uStack000000000000001e;undefined uStack000000000000001f;undefined8 param_10;undefined8 param_11;undefined8 param_12;undefined8 param_13;undefined4 param_14;if (param_3 == 0) {uStack0000000000000014 = uStack0000000000000014 & 0xfffffffd;}else {param_7 = param_7 & 0xfffffa84;uStack000000000000000c = 0;uStack0000000000000014 = uStack0000000000000014 & 0xffff7fb4;param_8 = param_8 & 0xfffffecf | 0x30;uStack000000000000001f = 1;uStack000000000000001e = 0;}*param_1 = CONCAT44(uStack000000000000000c,param_7);param_1[1] = CONCAT44(uStack0000000000000014,param_8);param_1[2] = CONCAT17(uStack000000000000001f,CONCAT16(uStack000000000000001e,param_9));param_1[3] = param_10;param_1[4] = param_11;param_1[5] = param_12;param_1[6] = param_13;*(undefined4 *)(param_1 + 7) = param_14;return param_1;}