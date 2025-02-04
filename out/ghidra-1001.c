#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

# 1 
void func0(double param_1,double param_2,double param_3,double *param_4,double *param_5,double *param_6){int iVar1;double dVar2;double dVar3;double dVar4;double local_40;if (0.0 < param_2) {local_40 = param_1;if (DAT_00100268 <= param_1) {local_40 = 0.0;}iVar1 = (int)(DAT_00100270 * local_40);dVar2 = DAT_00100270 * local_40 - (double)iVar1;dVar3 = (DAT_00100268 - param_2) * param_3;dVar4 = (DAT_00100268 - param_2 * dVar2) * param_3;dVar2 = (DAT_00100268 - (DAT_00100268 - dVar2) * param_2) * param_3;switch(iVar1) {case 0:*param_4 = param_3;*param_5 = dVar2;*param_6 = dVar3;break;case 1:*param_4 = dVar4;*param_5 = param_3;*param_6 = dVar3;break;case 2:*param_4 = dVar3;*param_5 = param_3;*param_6 = dVar2;break;case 3:*param_4 = dVar3;*param_5 = dVar4;*param_6 = param_3;break;case 4:*param_4 = dVar2;*param_5 = dVar3;*param_6 = param_3;break;case 5:*param_4 = param_3;*param_5 = dVar3;*param_6 = dVar4;}}else {*param_4 = param_3;*param_5 = param_3;*param_6 = param_3;}return;}