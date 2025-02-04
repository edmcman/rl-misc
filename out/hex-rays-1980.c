#include <math.h>

#include <memory.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float *result; // rax

*a1 = (float)(a3[2] * a2[6]) + (float)((float)(*a2 * *a3) + (float)(a3[1] * a2[3]));
a1[1] = (float)(a3[2] * a2[7]) + (float)((float)(a2[1] * *a3) + (float)(a3[1] * a2[4]));
a1[2] = (float)(a3[2] * a2[8]) + (float)((float)(a2[2] * *a3) + (float)(a3[1] * a2[5]));
a1[3] = (float)(a3[5] * a2[6]) + (float)((float)(*a2 * a3[3]) + (float)(a3[4] * a2[3]));
a1[4] = (float)(a3[5] * a2[7]) + (float)((float)(a2[1] * a3[3]) + (float)(a3[4] * a2[4]));
a1[5] = (float)(a3[5] * a2[8]) + (float)((float)(a2[2] * a3[3]) + (float)(a3[4] * a2[5]));
a1[6] = (float)(a3[8] * a2[6]) + (float)((float)(*a2 * a3[6]) + (float)(a3[7] * a2[3]));
a1[7] = (float)(a3[8] * a2[7]) + (float)((float)(a2[1] * a3[6]) + (float)(a3[7] * a2[4]));
result = a1 + 8;
a1[8] = (float)(a3[8] * a2[8]) + (float)((float)(a2[2] * a3[6]) + (float)(a3[7] * a2[5]));
return result;
}