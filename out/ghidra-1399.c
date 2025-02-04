#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <assert.h>

#include <time.h>

# 1 
uint func0(ushort param_1,undefined2 *param_2){uint uVar1;uVar1 = (uint)param_1 | (uint)(ushort)(param_1 >> 1 ^ param_1) << 0xf;uVar1 = (uVar1 >> 1 ^ uVar1) & 0xfffffff;if (param_2 != (undefined2 *)0x0) {*param_2 = (short)(uVar1 >> 0xd);}return uVar1;}