#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float *result; // rax

*a3 = (float)(a2[1] * a1[1]) + (float)(*a1 * *a2);
result = a3 + 1;
a3[1] = (float)(a2[1] * a1[3]) + (float)(a1[2] * *a2);
return result;
}