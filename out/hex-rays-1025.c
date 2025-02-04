
# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3, float *a4)
{
float *result; // rax

*a4 = (float)(a3[1] * (float)(a1[3] * a2[2]))
+ (float)((float)((float)((float)((float)((float)((float)-a1[1] * a2[2]) * a3[3])
+ (float)(a3[2] * (float)(a1[1] * a2[3])))
+ (float)(a3[3] * (float)(a1[2] * a2[1])))
+ (float)(a3[1] * (float)((float)-a1[2] * a2[3])))
+ (float)(a3[2] * (float)((float)-a1[3] * a2[1])));
a4[1] = (float)(*a3 * (float)((float)-a1[3] * a2[2]))
+ (float)((float)((float)((float)((float)((float)(*a1 * a2[2]) * a3[3])
+ (float)(a3[2] * (float)((float)-*a1 * a2[3])))
+ (float)(a3[3] * (float)((float)-a1[2] * *a2)))
+ (float)(*a3 * (float)(a1[2] * a2[3])))
+ (float)(a3[2] * (float)(a1[3] * *a2)));
a4[2] = (float)(*a3 * (float)(a1[3] * a2[1]))
+ (float)((float)((float)((float)((float)((float)((float)-*a1 * a2[1]) * a3[3])
+ (float)(a3[1] * (float)(*a1 * a2[3])))
+ (float)(a3[3] * (float)(a1[1] * *a2)))
+ (float)(*a3 * (float)((float)-a1[1] * a2[3])))
+ (float)(a3[1] * (float)((float)-a1[3] * *a2)));
result = a4 + 3;
a4[3] = (float)(*a3 * (float)((float)-a1[2] * a2[1]))
+ (float)((float)((float)((float)((float)((float)(*a1 * a2[1]) * a3[2])
+ (float)(a3[1] * (float)((float)-*a1 * a2[2])))
+ (float)(a3[2] * (float)((float)-a1[1] * *a2)))
+ (float)(*a3 * (float)(a1[1] * a2[2])))
+ (float)(a3[1] * (float)(a1[2] * *a2)));
return result;
}