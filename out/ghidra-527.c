
# 1 
undefined8 func0(long param_1,int param_2,double *param_3){int iVar1;iVar1 = (param_2 + -1) / 2;if (param_2 == 0) {*param_3 = 0.0;}else if (iVar1 == param_2 / 2) {*param_3 = *(double *)(param_1 + (long)iVar1 * 8);}else {*param_3 = (*(double *)(param_1 + (long)(param_2 / 2) * 8) +*(double *)(param_1 + (long)iVar1 * 8)) / DAT_001000c8;}return 0;}