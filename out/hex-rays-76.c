#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float *result; // rax

*a3 = (float)(a2[3] * a1[3]) + (float)((float)((float)(*a1 * *a2) + (float)(a2[1] * a1[1])) + (float)(a2[2] * a1[2]));
a3[1] = (float)(a2[3] * a1[7])
+ (float)((float)((float)(a1[4] * *a2) + (float)(a2[1] * a1[5])) + (float)(a2[2] * a1[6]));
a3[2] = (float)(a2[3] * a1[11])
+ (float)((float)((float)(a1[8] * *a2) + (float)(a2[1] * a1[9])) + (float)(a2[2] * a1[10]));
result = a3 + 3;
a3[3] = (float)(a2[3] * a1[15])
+ (float)((float)((float)(a1[12] * *a2) + (float)(a2[1] * a1[13])) + (float)(a2[2] * a1[14]));
return result;
}