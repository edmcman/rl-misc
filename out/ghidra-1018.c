











# 1 
undefined8 func0(int param_1,long *param_2,long param_3,int *param_4){long lVar1;if (*param_4 != 0) {*param_4 = 0;DAT_00100250 = 0;}if (DAT_00100250 == 3) {if (param_1 < 0) {DAT_00100258 = *param_2;lVar1 = (DAT_00100260 + DAT_00100258) / 2;if (lVar1 <= DAT_00100258 + 1) {lVar1 = DAT_00100258 + 1;}*param_2 = lVar1;return 0;}if ((param_1 != 0) && (DAT_00100260 - DAT_00100258 != 1)) {DAT_00100260 = *param_2;lVar1 = (DAT_00100260 + DAT_00100258) / 2;if (lVar1 <= DAT_00100258 + 1) {lVar1 = DAT_00100258 + 1;}*param_2 = lVar1;return 0;}return 1;}if (DAT_00100250 < 4) {if (DAT_00100250 == 2) {if (param_1 < 0) {DAT_00100258 = *param_2;lVar1 = *param_2 + 1;if (param_3 <= *param_2 + 1) {lVar1 = param_3;}*param_2 = *param_2 + lVar1;return 0;}DAT_00100260 = *param_2;if ((param_1 != 0) && (DAT_00100260 - DAT_00100258 != 1)) {DAT_00100250 = 3;*param_2 = (DAT_00100260 + DAT_00100258) / 2;return 0;}return 1;}if (DAT_00100250 < 3) {if (DAT_00100250 == 0) {DAT_00100250 = 1;*param_2 = 0;return 0;}if (DAT_00100250 == 1) {DAT_00100250 = 2;if (param_1 < 0) {DAT_00100258 = 0;*param_2 = 1;return 0;}DAT_00100250 = 2;return 1;}}}return 0;}