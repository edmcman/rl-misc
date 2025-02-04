#include <errno.h>

#include <limits.h>

#include <signal.h>

#include <stdarg.h>

#include <string.h>

#include <stdlib.h>

#include <time.h>

# 1 
undefined4 func0(ulong param_1,ulong param_2,long *param_3){undefined auVar1 [16];undefined auVar2 [16];undefined4 local_c;if ((param_2 == 0) ||(auVar1._8_8_ = 0, auVar1._0_8_ = param_1, auVar2._8_8_ = 0, auVar2._0_8_ = param_2,SUB168(auVar1 * auVar2,8) == 0)) {local_c = 0;}else {local_c = 1;}if (param_3 != (long *)0x0) {*param_3 = param_1 * param_2;}return local_c;}