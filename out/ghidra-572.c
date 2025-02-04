#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <ctype.h>

#include <math.h>

#include <dlfcn.h>

# 1 
void func0(float param_1,float param_2,float param_3,float param_4,float *param_5,float *param_6,float *param_7_00,float *param_8_00,float *param_9_00,float *param_10_00,float *param_7,float *param_8,float *param_9,float *param_10,float *param_11,float *param_12){*param_5 = (float)(DAT_001003b8 * (double)param_2);*param_9_00 = (float)(DAT_001003b8 * (double)param_2);*param_9 = (float)(DAT_001003b8 * (double)param_2);*param_6 = (float)(DAT_001003c0 * (double)param_4 + (double)(param_3 * 0.0));*param_7_00 = (float)(DAT_001003c0 * (double)param_3 + (double)(param_4 * 0.0));*param_10_00 = (float)(DAT_001003d0 * (double)param_4 + (double)param_3 * DAT_001003c8);*param_7 = (float)(DAT_001003d0 * (double)param_3 + (double)param_4 * DAT_001003c8);*param_10 = (float)((double)(param_4 * 0.0) + (double)param_3 * DAT_001003d8);*param_11 = (float)((double)(param_3 * 0.0) + (double)param_4 * DAT_001003d8);*param_8_00 = (float)((double)param_1 +(double)(DAT_001003e4 * *param_7_00 +*param_5 * DAT_001003e0 + DAT_001003e4 * *param_6) / DAT_001003e8);*param_8 = (float)((double)param_1 +(double)(DAT_001003e4 * *param_7 +*param_9_00 * DAT_001003e0 + DAT_001003e4 * *param_10_00) / DAT_001003e8);*param_12 = (float)((double)param_1 +(double)(DAT_001003e4 * *param_11 +*param_9 * DAT_001003e0 + DAT_001003e4 * *param_10) / DAT_001003e8);*param_8_00 = (float)((DAT_001003f8 - (double)param_2 / DAT_001003f0) + (double)*param_8_00);*param_8 = (float)((DAT_001003f8 - (double)param_2 / DAT_001003f0) + (double)*param_8);*param_12 = (float)((DAT_001003f8 - (double)param_2 / DAT_001003f0) + (double)*param_12);return;}