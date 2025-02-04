
# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float *result; // rax

*a3 = (float)(a2[1] * (float)-a1[2]) + (float)(a1[1] * a2[2]);
a3[1] = (float)(*a2 * a1[2]) + (float)((float)-*a1 * a2[2]);
result = a3 + 2;
a3[2] = (float)(*a2 * (float)-a1[1]) + (float)(*a1 * a2[1]);
return result;
}