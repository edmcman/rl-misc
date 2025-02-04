
# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3, float a4, float a5)
{
float *result; // rax
float v6; // [rsp+20h] [rbp-8h]
float v7; // [rsp+24h] [rbp-4h]

if ( a5 > 0.0 )
{
v6 = (float)((float)(1.0 - a1[3]) * a5) + a1[3];
v7 = a1[3] / v6;
*a1 = (float)((float)(1.0 - v7) * a2) + (float)(*a1 * v7);
a1[1] = (float)((float)(1.0 - v7) * a3) + (float)(a1[1] * v7);
a1[2] = (float)((float)(1.0 - v7) * a4) + (float)(a1[2] * v7);
result = a1 + 3;
a1[3] = v6;
}
return result;
}