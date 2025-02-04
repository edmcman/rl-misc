#include <ctype.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void func0(uint param_1,int param_2,int *param_3,int *param_4){if (((param_1 & 3) == 0) && (((int)param_1 % 100 != 0 || ((int)param_1 % 400 == 0)))) {_DAT_00100124 = 0x1d;}else {_DAT_00100124 = 0x1c;}*param_3 = 1;*param_4 = param_2;while ((*param_3 < 0xd && ((int)(&DAT_00100120)[*param_3 + -1] < *param_4))) {*param_4 = *param_4 - (&DAT_00100120)[*param_3 + -1];*param_3 = *param_3 + 1;}return;}