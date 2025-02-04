#include <stdio.h>

#include <stdlib.h>

#include <stdarg.h>

#include <string.h>

#include <sys/mman.h>

#include <sys/param.h>

#include <regex.h>

# 1 
undefined8 func0(long param_1,long param_2,ulong param_3,ulong *param_4){undefined8 uVar1;ulong local_10;if (param_1 == param_2) {uVar1 = 0;}else if ((param_1 == 0) || (param_2 == 0)) {uVar1 = 2;}else {for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {if (*(char *)(local_10 + param_1) != *(char *)(local_10 + param_2)) {*param_4 = local_10;return 1;}}uVar1 = 0;}return uVar1;}