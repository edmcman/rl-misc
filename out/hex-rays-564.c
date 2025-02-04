#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <GL/gl.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, __int64 a3, int a4)
{
float *result; // rax

*a1 = a2[12]
+ (float)((float)((float)(*a2 * *(float *)(4LL * a4 + a3)) + (float)(*(float *)(4 * (a4 + 1LL) + a3) * a2[4]))
+ (float)(*(float *)(4 * (a4 + 2LL) + a3) * a2[8]));
a1[1] = a2[13]
+ (float)((float)((float)(a2[1] * *(float *)(4LL * a4 + a3)) + (float)(*(float *)(4 * (a4 + 1LL) + a3) * a2[5]))
+ (float)(*(float *)(4 * (a4 + 2LL) + a3) * a2[9]));
result = a1 + 2;
a1[2] = a2[14]
+ (float)((float)((float)(a2[2] * *(float *)(4LL * a4 + a3)) + (float)(*(float *)(4 * (a4 + 1LL) + a3) * a2[6]))
+ (float)(*(float *)(4 * (a4 + 2LL) + a3) * a2[10]));
return result;
}