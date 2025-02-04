
# 1 
undefined8 func0(int *param_1,int *param_2){int iVar1;undefined8 uVar2;if (*param_1 == *param_2) {uVar2 = 0;}else if (*param_2 < *param_1) {iVar1 = *param_1;*param_1 = *param_2;*param_2 = iVar1;uVar2 = 1;}else {uVar2 = 0;}return uVar2;}