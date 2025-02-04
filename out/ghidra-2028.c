#include <stdlib.h>

#include <stdio.h>

# 1 
undefined8 func0(int *param_1,int *param_2,int *param_3,int *param_4,int param_5,int param_6,int param_7,int param_8){undefined8 uVar1;if (*param_1 < param_5) {*param_3 = *param_3 - (param_5 - *param_1);*param_1 = param_5;}if (*param_2 < param_6) {*param_4 = *param_4 - (param_6 - *param_2);*param_2 = param_6;}if (param_7 + param_5 < *param_1 + *param_3) {*param_3 = (param_5 + param_7) - *param_1;}if (param_8 + param_6 < *param_2 + *param_4) {*param_4 = (param_6 + param_8) - *param_2;}if ((*param_3 < 1) || (*param_4 < 1)) {uVar1 = 0;}else {uVar1 = 1;}return uVar1;}