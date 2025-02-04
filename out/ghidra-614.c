#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
undefined8 func0(float *param_1,float *param_2,float *param_3){*param_3 = param_2[0xc] * param_1[3] +*param_1 * *param_2 + param_2[4] * param_1[1] + param_2[8] * param_1[2];param_3[1] = param_2[0xd] * param_1[3] +*param_1 * param_2[1] + param_2[5] * param_1[1] + param_2[9] * param_1[2];param_3[2] = param_2[0xe] * param_1[3] +*param_1 * param_2[2] + param_2[6] * param_1[1] + param_2[10] * param_1[2];param_3[3] = param_2[0xf] * param_1[3] +*param_1 * param_2[3] + param_2[7] * param_1[1] + param_2[0xb] * param_1[2];return 0;}