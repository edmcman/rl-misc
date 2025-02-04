#include <math.h>

# 1 
undefined8 func0(double *param_1,double *param_2){double dVar1;double dVar2;undefined8 uVar3;dVar1 = param_1[1];dVar2 = *param_1;if ((DAT_001000a0 <= dVar1) || (dVar1 <= _DAT_001000a8)) {*param_2 = (double)((ulong)dVar2 ^ DAT_001000b0) / dVar1;uVar3 = 1;}else if ((DAT_001000a0 <= dVar2) || (dVar2 <= _DAT_001000a8)) {uVar3 = 0;}else {uVar3 = 4;}return uVar3;}