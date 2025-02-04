#include <math.h>

#include <memory.h>

# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3, float a4)
{
float *result; // rax

*a1 = (float)(a1[3] * a2) + *a1;
a1[1] = (float)(a1[3] * a3) + a1[1];
a1[2] = (float)(a1[3] * a4) + a1[2];
a1[4] = (float)(a1[7] * a2) + a1[4];
a1[5] = (float)(a1[7] * a3) + a1[5];
a1[6] = (float)(a1[7] * a4) + a1[6];
a1[8] = (float)(a1[11] * a2) + a1[8];
a1[9] = (float)(a1[11] * a3) + a1[9];
a1[10] = (float)(a1[11] * a4) + a1[10];
a1[12] = (float)(a1[15] * a2) + a1[12];
a1[13] = (float)(a1[15] * a3) + a1[13];
result = a1 + 14;
a1[14] = (float)(a1[15] * a4) + a1[14];
return result;
}