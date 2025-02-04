#include <math.h>

#include <stdint.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2)
{
float v2; // xmm0_4
float v3; // xmm0_4
float v4; // xmm0_4
float v5; // xmm0_4
float v6; // xmm0_4
float v7; // xmm0_4
float *result; // rax

*a2 = (float)((float)((float)(a1[1] * a1[1]) + (float)(*a1 * *a1)) - (float)(a1[2] * a1[2])) - (float)(a1[3] * a1[3]);
v2 = (float)(a1[3] * *a1) + (float)(a1[1] * a1[2]);
a2[1] = v2 + v2;
v3 = (float)(a1[3] * a1[1]) - (float)(a1[2] * *a1);
a2[2] = v3 + v3;
v4 = (float)(a1[2] * a1[1]) - (float)(a1[3] * *a1);
a2[3] = v4 + v4;
a2[4] = (float)((float)(a1[2] * a1[2]) + (float)((float)(*a1 * *a1) - (float)(a1[1] * a1[1])))
- (float)(a1[3] * a1[3]);
v5 = (float)(a1[1] * *a1) + (float)(a1[2] * a1[3]);
a2[5] = v5 + v5;
v6 = (float)(a1[2] * *a1) + (float)(a1[1] * a1[3]);
a2[6] = v6 + v6;
v7 = (float)(a1[3] * a1[2]) - (float)(a1[1] * *a1);
a2[7] = v7 + v7;
result = a2 + 6;
a2[8] = (float)(a1[3] * a1[3])
+ (float)((float)((float)(*a1 * *a1) - (float)(a1[1] * a1[1])) - (float)(a1[2] * a1[2]));
return result;
}