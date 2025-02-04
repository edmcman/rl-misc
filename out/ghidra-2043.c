


# 1 
undefined8 func0(double param_1,double param_2,double *param_3,double *param_4,double *param_5){double dVar1;double dVar2;double dVar3;dVar1 = param_3[3] * (param_1 - *param_3);dVar2 = param_3[3] * (param_2 - param_3[1]);if ((dVar1 == 0.0) && (dVar2 == 0.0)) {*param_4 = *param_3;*param_5 = param_3[1];}else {dVar3 = DAT_00100170 - (param_3[2] / DAT_00100168) * (dVar2 * dVar2 + dVar1 * dVar1);*param_4 = *param_3 + dVar1 * dVar3;*param_5 = param_3[1] + dVar2 * dVar3;}return 0;}