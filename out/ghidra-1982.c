#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
void func0(double param_1,double *param_2){double dVar1;double dVar2;double dVar3;dVar1 = param_1 / DAT_001000e8 - DAT_001000e8 / param_1;dVar2 = DAT_001000f0 * dVar1;dVar1 = DAT_001000f8 * dVar1;dVar3 = DAT_00100100 + dVar1 * dVar1;*param_2 = (DAT_00100108 * (dVar2 * dVar1 + DAT_00100100)) / dVar3;param_2[1] = (DAT_00100108 * (dVar2 - dVar1)) / dVar3;return;}