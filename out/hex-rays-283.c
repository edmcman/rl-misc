
# 1 
#include "defs.h"
float * func0(float *a1, float *a2)
{
float v2; // xmm0_4
float *result; // rax
float v4; // [rsp+1Ch] [rbp-4h]

v4 = 1.0 / *a2;
v2 = (v4 + v4 - (float)(v4 * v4)) / ((1.0 - v4) * (1.0 - v4));
result = a1;
*a1 = v2;
return result;
}