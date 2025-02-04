#include <errno.h>

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <unistd.h>

#include <fcntl.h>

#include <linux/fb.h>

#include <linux/types.h>

#include <linux/videodev2.h>

#include <sys/ioctl.h>

#include <sys/mman.h>

# 1 
void func0(uint param_1,uint param_2,uint *param_3,int param_4,char param_5){uint uVar1;uint uVar2;uint uVar3;uint uVar4;undefined4 local_28;DAT_001002a4 = 0x74cc;DAT_001002a8 = 0xe54c;DAT_001002ac = 0x2c88;DAT_001002b0 = 0xc33c;DAT_001002b4 = 0xa37a;DAT_001002b8 = 0x1fc0;DAT_001002bc = 0x41e4;DAT_001002c0 = 0x8153;DAT_001002c4 = 0xc332;uVar2 = param_1 >> 0x10 & 0xff;uVar3 = param_1 >> 8 & 0xff;uVar4 = param_1 & 0xff;local_28 = (uVar4 * 0x2c88 + uVar2 * 0x74cc + uVar3 * 0xe54c) / 100000;uVar1 = (uVar4 * 0xc332 + uVar2 * -0x41e4 + uVar3 * -0x8153 + 12800000) / 100000;uVar2 = (uVar2 * 0xc33c + uVar3 * -0xa37a + uVar4 * -0x1fc0 + 12800000) / 100000;if (param_5 == '\0') {local_28 = uVar1 << 8 | (param_1 >> 0x18) << 0x18 | local_28 << 0x10 | uVar2;}else {local_28 = uVar1 << 8 | (param_1 >> 0x18) << 0x18 | uVar2 << 0x10 | local_28;}if (param_4 == 0x10) {uVar3 = ((param_2 & 0xff) * 0x2c88 +(param_2 >> 0x10 & 0xff) * 0x74cc + (param_2 >> 8 & 0xff) * 0xe54c) / 100000;if (param_5 == '\0') {local_28 = local_28 >> 0x10 & 0xff | uVar1 << 8 | uVar2 << 0x18 | uVar3 << 0x10;}else {local_28 = (local_28 & 0xff) << 8 | uVar2 << 0x10 | uVar3 << 0x18 | uVar1;}}*param_3 = local_28;return;}