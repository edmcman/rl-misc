#include <stdint.h>

#include <math.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3, float a4)
{
float v4; // xmm0_4
float v5; // xmm0_4
float *result; // rax
float v7; // xmm0_4

v4 = (float)(*a2 * a4) + (1.0 - a4) * *a1;
*a3 = v4;
v5 = (float)(a2[1] * a4) + (1.0 - a4) * a1[1];
a3[1] = v5;
result = a3 + 2;
v7 = (float)(a2[2] * a4) + (1.0 - a4) * a1[2];
a3[2] = v7;
return result;
}