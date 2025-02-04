#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float *result; // rax

*a3 = (float)(a2[3] * a1[12]) + (float)((float)((float)(*a1 * *a2) + (float)(a2[1] * a1[4])) + (float)(a2[2] * a1[8]));
a3[1] = (float)(a2[3] * a1[13])
+ (float)((float)((float)(a1[1] * *a2) + (float)(a2[1] * a1[5])) + (float)(a2[2] * a1[9]));
a3[2] = (float)(a2[3] * a1[14])
+ (float)((float)((float)(a1[2] * *a2) + (float)(a2[1] * a1[6])) + (float)(a2[2] * a1[10]));
result = a3 + 3;
a3[3] = (float)(a2[3] * a1[15])
+ (float)((float)((float)(a1[3] * *a2) + (float)(a2[1] * a1[7])) + (float)(a2[2] * a1[11]));
return result;
}