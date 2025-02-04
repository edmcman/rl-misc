#include <assert.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
undefined8 func0(float *param_1,float *param_2,float *param_3,float *param_4){undefined8 uVar1;if (param_4 == (float *)0x0) {uVar1 = 0;}else {if (0.0 <= *param_1) {if (*param_4 < *param_1) {if (_DAT_00100250 < (double)(*param_1 - *param_4)) {return 0;}*param_1 = *param_4;}}else {if (_DAT_00100250 < (double)(float)((uint)*param_1 ^ DAT_00100240)) {return 0;}*param_1 = 0.0;}if (0.0 <= *param_2) {if (param_4[1] < *param_2) {if (_DAT_00100250 < (double)(*param_2 - param_4[1])) {return 0;}*param_2 = param_4[1];}}else {if (_DAT_00100250 < (double)(float)((uint)*param_2 ^ DAT_00100240)) {return 0;}*param_2 = 0.0;}if (param_4[2] == 0.0) {*param_3 = 0.0;}else if (0.0 <= *param_3) {if (param_4[2] < *param_3) {if (_DAT_00100250 < (double)(*param_3 - param_4[2])) {return 0;}*param_3 = param_4[2];}}else {if (_DAT_00100250 < (double)(float)((uint)*param_3 ^ DAT_00100240)) {return 0;}*param_3 = 0.0;}uVar1 = 1;}return uVar1;}