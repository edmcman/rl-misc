#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <GL/gl.h>

# 1 
void func0(float *param_1,float *param_2,long param_3,int param_4){*param_1 = param_2[0xc] +*param_2 * *(float *)(param_3 + (long)param_4 * 4) +*(float *)(param_3 + ((long)param_4 + 1) * 4) * param_2[4] +*(float *)(param_3 + ((long)param_4 + 2) * 4) * param_2[8];param_1[1] = param_2[0xd] +param_2[1] * *(float *)(param_3 + (long)param_4 * 4) +*(float *)(param_3 + ((long)param_4 + 1) * 4) * param_2[5] +*(float *)(param_3 + ((long)param_4 + 2) * 4) * param_2[9];param_1[2] = param_2[0xe] +param_2[2] * *(float *)(param_3 + (long)param_4 * 4) +*(float *)(param_3 + ((long)param_4 + 1) * 4) * param_2[6] +*(float *)(param_3 + ((long)param_4 + 2) * 4) * param_2[10];return;}