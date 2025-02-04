#include <math.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float v4; // [rsp+30h] [rbp-10h]
float v5; // [rsp+34h] [rbp-Ch]

v4 = (float)(*a2 * a1[2]) - (float)(a2[2] * *a1);
v5 = (float)(a2[1] * *a1) - (float)(*a2 * a1[1]);
*a3 = (float)(a2[2] * a1[1]) - (float)(a2[1] * a1[2]);
a3[1] = v4;
a3[2] = v5;
return a3;
}