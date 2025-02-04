#include <math.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float *result; // rax

*a1 = (float)(a3[2] * a2[1]) - (float)(a3[1] * a2[2]);
a1[1] = (float)(*a3 * a2[2]) - (float)(a3[2] * *a2);
result = a1 + 2;
a1[2] = (float)(a3[1] * *a2) - (float)(*a3 * a2[1]);
return result;
}