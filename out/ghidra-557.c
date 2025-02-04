#include <stdio.h>

#include <stdlib.h>

#include <string.h>             /* memset, strlen */

#include <ctype.h>

#include <errno.h>

#include <math.h>

#include <fcntl.h>

#include <unistd.h>

# 1 
void func0(int param_1,int *param_2,int *param_3,int *param_4){int iVar1;int iVar2;int iVar3;int iVar4;undefined4 local_1c;if (param_1 == 0x3c) {*param_2 = 0x1d;*param_3 = 2;*param_4 = 0x76c;}else {local_1c = param_1;if (param_1 < 0x3c) {local_1c = param_1 + 1;}iVar1 = ((local_1c + 0x25e584) * 4) / 0x23ab1;iVar2 = iVar1 * 0x23ab1;iVar3 = iVar2 + 3;if (iVar3 < 0) {iVar3 = iVar2 + 6;}iVar3 = (local_1c + 0x25e584) - (iVar3 >> 2);iVar2 = ((iVar3 + 1) * 4000) / 0x164b09;iVar4 = iVar2 * 0x5b5;if (iVar4 < 0) {iVar4 = iVar4 + 3;}iVar4 = (iVar3 - (iVar4 >> 2)) + 0x1f;iVar3 = (iVar4 * 0x50) / 0x98f;*param_2 = iVar4 - (iVar3 * 0x98f) / 0x50;*param_3 = iVar3 + 2 + (iVar3 / 0xb) * -0xc;*param_4 = (iVar1 + -0x31) * 100 + iVar2 + iVar3 / 0xb;}return;}