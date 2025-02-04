#include <math.h>

#include <string.h>

#include <stdio.h>

#include <math.h>

#include <string.h>

#include <stdio.h>

# 1 
undefined8 func0(float param_1,int param_2,int param_3,double *param_4){undefined8 uVar1;undefined4 local_c;local_c = param_2;if (param_2 < 0) {local_c = -param_2;}*param_4 = (double)param_1 / DAT_001000c8 + (double)local_c + (double)param_3 / DAT_001000c0;if (param_2 < 0) {*param_4 = (double)((ulong)*param_4 ^ DAT_001000d0);}if (DAT_001000e0 <= *param_4) {if (*param_4 <= _DAT_001000e8) {uVar1 = 0;}else {uVar1 = 1;}}else {uVar1 = 1;}return uVar1;}