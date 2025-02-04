
# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float *result; // rax

*a3 = (float)(a2[8] * a1[2]) + (float)((float)(*a1 * *a2) + (float)(a2[4] * a1[1]));
a3[1] = (float)(a2[9] * a1[2]) + (float)((float)(*a1 * a2[1]) + (float)(a2[5] * a1[1]));
a3[2] = (float)(a2[10] * a1[2]) + (float)((float)(*a1 * a2[2]) + (float)(a2[6] * a1[1]));
a3[3] = a1[3] + (float)((float)((float)(*a1 * a2[3]) + (float)(a2[7] * a1[1])) + (float)(a2[11] * a1[2]));
a3[4] = (float)(a2[8] * a1[6]) + (float)((float)(a1[4] * *a2) + (float)(a2[4] * a1[5]));
a3[5] = (float)(a2[9] * a1[6]) + (float)((float)(a1[4] * a2[1]) + (float)(a2[5] * a1[5]));
a3[6] = (float)(a2[10] * a1[6]) + (float)((float)(a1[4] * a2[2]) + (float)(a2[6] * a1[5]));
a3[7] = a1[7] + (float)((float)((float)(a1[4] * a2[3]) + (float)(a2[7] * a1[5])) + (float)(a2[11] * a1[6]));
a3[8] = (float)(a2[8] * a1[10]) + (float)((float)(a1[8] * *a2) + (float)(a2[4] * a1[9]));
a3[9] = (float)(a2[9] * a1[10]) + (float)((float)(a1[8] * a2[1]) + (float)(a2[5] * a1[9]));
a3[10] = (float)(a2[10] * a1[10]) + (float)((float)(a1[8] * a2[2]) + (float)(a2[6] * a1[9]));
result = a3 + 8;
a3[11] = a1[11] + (float)((float)((float)(a1[8] * a2[3]) + (float)(a2[7] * a1[9])) + (float)(a2[11] * a1[10]));
return result;
}