#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
float * func0(float *a1)
{
float *result; // rax
float v2; // [rsp+10h] [rbp-8h]
float v3; // [rsp+14h] [rbp-4h]

v2 = 1.0 / (float)((float)(a1[3] * *a1) - (float)(a1[2] * a1[1]));
v3 = *a1;
*a1 = a1[3] * v2;
a1[1] = a1[1] * (float)-v2;
a1[2] = a1[2] * (float)-v2;
result = a1 + 3;
a1[3] = v2 * v3;
return result;
}