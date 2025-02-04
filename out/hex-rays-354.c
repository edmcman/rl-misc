#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <GL/gl.h>

# 1 
#include "defs.h"
float * func0(float *a1, __int64 a2, int a3)
{
float *result; // rax
float v4; // [rsp+18h] [rbp-Ch]
float v5; // [rsp+1Ch] [rbp-8h]
float v6; // [rsp+20h] [rbp-4h]

v4 = *(float *)(4LL * a3 + a2);
v5 = *(float *)(4 * (a3 + 1LL) + a2);
v6 = *(float *)(4 * (a3 + 2LL) + a2);
*(float *)(4LL * a3 + a2) = a1[12] + (float)((float)((float)(*a1 * v4) + (float)(a1[4] * v5)) + (float)(a1[8] * v6));
*(float *)(4 * (a3 + 1LL) + a2) = a1[13]
+ (float)((float)((float)(a1[1] * v4) + (float)(a1[5] * v5)) + (float)(a1[9] * v6));
result = (float *)(4 * (a3 + 2LL) + a2);
*result = a1[14] + (float)((float)((float)(a1[2] * v4) + (float)(a1[6] * v5)) + (float)(a1[10] * v6));
return result;
}