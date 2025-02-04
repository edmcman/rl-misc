
# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3, float a4, float a5)
{
float *result; // rax

*a3 = (float)(*a2 * a5) + (float)(*a1 * a4);
a3[1] = (float)(a2[1] * a5) + (float)(a1[1] * a4);
result = a3 + 2;
a3[2] = (float)(a2[2] * a5) + (float)(a1[2] * a4);
return result;
}