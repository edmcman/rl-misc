
# 1 
undefined8 func0(double param_1,double *param_2,long param_3,long param_4,int param_5,double *param_6){int iVar1;int iVar2;undefined8 uVar3;double dVar4;double dVar5;double dVar6;if (param_5 == DAT_0010041c) {if (param_2[(long)DAT_00100420 + -1] <= param_1) {iVar1 = DAT_00100420;if (param_2[(long)DAT_00100424 + -1] <= param_1) {iVar1 = DAT_00100424;if (param_5 + -1 <= DAT_00100424) {iVar1 = param_5 + -1;}DAT_00100424 = iVar1 + 1;if (param_2[(long)DAT_00100424 + -1] <= param_1) {DAT_00100424 = param_5;}if (param_2[(long)DAT_00100424 + -1] < param_1) {DAT_00100420 = iVar1;return 2;}}}else {DAT_00100424 = DAT_00100420;if (DAT_00100420 < 2) {DAT_00100424 = 2;}DAT_00100420 = DAT_00100424 + -1;if (param_1 < param_2[(long)DAT_00100420 + -1]) {DAT_00100420 = 1;}iVar1 = DAT_00100420;if (param_1 < param_2[(long)DAT_00100420 + -1]) {return 1;}}}else {DAT_00100420 = 1;if (param_1 < *param_2) {DAT_0010041c = param_5;DAT_00100420 = 1;DAT_00100424 = param_5;return 1;}iVar1 = DAT_00100420;DAT_00100424 = param_5;DAT_0010041c = param_5;if (param_2[(long)param_5 + -1] < param_1) {DAT_00100420 = 1;return 2;}}while (DAT_00100420 = iVar1, 1 < DAT_00100424 - DAT_00100420) {iVar2 = (DAT_00100420 + DAT_00100424) / 2;iVar1 = iVar2;if (param_1 < param_2[(long)iVar2 + -1]) {iVar1 = DAT_00100420;DAT_00100424 = iVar2;}}dVar4 = param_2[(long)DAT_00100424 + -1] - param_2[(long)DAT_00100420 + -1];if (0.0 < dVar4) {dVar5 = (param_2[(long)DAT_00100424 + -1] - param_1) / dVar4;dVar6 = (param_1 - param_2[(long)DAT_00100420 + -1]) / dVar4;*param_6 = (dVar4 * dVar4 *((dVar5 * dVar5 - DAT_00100428) * dVar5 **(double *)(param_4 + -8 + (long)DAT_00100420 * 8) +*(double *)(param_4 + -8 + (long)DAT_00100424 * 8) *(dVar6 * dVar6 - DAT_00100428) * dVar6)) / DAT_00100430 +*(double *)(param_3 + -8 + (long)DAT_00100420 * 8) * dVar5 +*(double *)(param_3 + -8 + (long)DAT_00100424 * 8) * dVar6;uVar3 = 0;}else {uVar3 = 3;}return uVar3;}