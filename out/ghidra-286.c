#include <time.h>

#include <stdio.h>

#include <stddef.h>

#include <stdlib.h>

#include <string.h>

# 1 
ulong func0(ulong *param_1){ulong uVar1;uVar1 = *param_1 ^ *param_1 << 0xd;uVar1 = uVar1 ^ (uint)(uVar1 >> 0x11) & 0x7fff;*param_1 = uVar1 ^ uVar1 << 5;return *param_1 & 0xffffffff;}