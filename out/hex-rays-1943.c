#include <math.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float *result; // rax

*a1 = a2[12] + (float)((float)((float)(*a2 * *a3) + (float)(a3[1] * a2[4])) + (float)(a3[2] * a2[8]));
a1[1] = a2[13] + (float)((float)((float)(a2[1] * *a3) + (float)(a3[1] * a2[5])) + (float)(a3[2] * a2[9]));
result = a1 + 2;
a1[2] = a2[14] + (float)((float)((float)(a2[2] * *a3) + (float)(a3[1] * a2[6])) + (float)(a3[2] * a2[10]));
return result;
}