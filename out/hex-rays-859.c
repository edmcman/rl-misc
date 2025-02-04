#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float *result; // rax

*a3 = (float)(a2[2] * a1[2]) + (float)((float)(*a1 * *a2) + (float)(a2[1] * a1[1]));
a3[1] = (float)(a2[2] * a1[5]) + (float)((float)(a1[3] * *a2) + (float)(a2[1] * a1[4]));
result = a3 + 2;
a3[2] = (float)(a2[2] * a1[8]) + (float)((float)(a1[6] * *a2) + (float)(a2[1] * a1[7]));
return result;
}