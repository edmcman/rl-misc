#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
undefined8 func0(float *param_1,float *param_2,float *param_3){*param_3 = param_2[2] * param_1[1] - param_1[2] * param_2[1];param_3[1] = *param_2 * param_1[2] - *param_1 * param_2[2];param_3[2] = param_2[1] * *param_1 - param_1[1] * *param_2;return 0;}