#include <ctype.h>

#include <errno.h>

#include <stdbool.h>

#include <stdint.h>

#include <stdlib.h>

#include <stdio.h>

#include <string.h>

# 1 
ulong func0(long param_1,ulong *param_2){byte bVar1;ulong uVar2;uVar2 = *param_2;if (uVar2 != 0) {*param_2 = *param_2 - 1;bVar1 = *(byte *)(param_1 + *param_2);*(undefined *)(param_1 + *param_2) = 0;uVar2 = (ulong)bVar1;}return uVar2;}