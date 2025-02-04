
# 1 
#include "defs.h"
unsigned __int64  func0(float *a1, float *a2, float *a3)
{
float v4; // [rsp+30h] [rbp-10h]
float v5; // [rsp+34h] [rbp-Ch]
unsigned __int64 v6; // [rsp+38h] [rbp-8h]

v6 = __readfsqword(0x28u);
v4 = (float)(a2[2] * a1[5]) + (float)((float)(a1[3] * *a2) + (float)(a2[1] * a1[4]));
v5 = (float)(a2[2] * a1[7]) + (float)((float)(a1[6] * *a2) + (float)(a2[1] * a1[6]));
*a3 = (float)(a2[2] * a1[2]) + (float)((float)(*a1 * *a2) + (float)(a2[1] * a1[1]));
a3[1] = v4;
a3[2] = v5;
return __readfsqword(0x28u) ^ v6;
}