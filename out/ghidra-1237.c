#include <errno.h>

#include <ctype.h>

#include <stdio.h>

#include <stdint.h>

#include <stdlib.h>

# 1 
void func0(long param_1,int param_2,int param_3){byte bVar1;int iVar2;uint uVar3;ulong uVar4;int local_38;int local_20;ulong *local_18;ulong local_10;iVar2 = param_2;if (param_2 < 0) {iVar2 = param_2 + 0x3f;}local_18 = (ulong *)(param_1 + (long)(iVar2 >> 6) * 8);uVar3 = param_3 + param_2;bVar1 = (byte)(param_2 >> 0x1f);local_10 = -1L << (((char)param_2 + (bVar1 >> 2) & 0x3f) - (bVar1 >> 2) & 0x3f);local_20 = 0x40 - param_2 % 0x40;local_38 = param_3;while (-1 < local_38 - local_20) {*local_18 = ~local_10 & *local_18;local_38 = local_38 - local_20;local_10 = 0xffffffffffffffff;local_18 = local_18 + 1;local_20 = 0x40;}if (local_38 != 0) {if ((uVar3 & 0x3f) == 0) {uVar4 = 0xffffffffffffffff;}else {bVar1 = (byte)((int)uVar3 >> 0x1f);uVar4 = (1L << (((char)uVar3 + (bVar1 >> 2) & 0x3f) - (bVar1 >> 2) & 0x3f)) - 1;}*local_18 = ~(local_10 & uVar4) & *local_18;}return;}