#include <math.h>

#include <stdio.h>

# 1 
#include "defs.h"
float * func0(int a1, float *a2, float *a3, float *a4, float a5, float a6, float a7, float a8, float a9, float a10)
{
float *result; // rax
float v11; // [rsp+44h] [rbp-4h]

if ( a5 < (float)a1 )
v11 = a10 - (float)((float)((float)a1 - a5) * a7);
else
v11 = (float)((float)a1 * a7) + a6;
*a2 = (float)(1.0 - (float)(a8 / 100.0)) * v11;
*a3 = (float)((float)(a8 / 100.0) + 1.0) * v11;
result = a4;
*a4 = (float)(a9 / 100.0) * v11;
return result;
}