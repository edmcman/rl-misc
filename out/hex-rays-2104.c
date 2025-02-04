#include <math.h>

# 1 
#include "defs.h"
unsigned __int64  func0(float *a1, float *a2)
{
float v3; // [rsp+14h] [rbp-1Ch]
float v4; // [rsp+18h] [rbp-18h]
float v5; // [rsp+1Ch] [rbp-14h]
unsigned __int64 v6; // [rsp+28h] [rbp-8h]

v6 = __readfsqword(0x28u);
v3 = (float)((float)(a2[3] * a1[2]) + (float)((float)(*a1 * a2[1]) + (float)(*a2 * a1[1]))) - (float)(a2[2] * a1[3]);
v4 = (float)(a2[1] * a1[3]) + (float)((float)((float)(a2[2] * *a1) - (float)(a2[3] * a1[1])) + (float)(*a2 * a1[2]));
v5 = (float)(*a2 * a1[3]) + (float)((float)((float)(a2[2] * a1[1]) + (float)(*a1 * a2[3])) - (float)(a2[1] * a1[2]));
*a1 = (float)((float)((float)(*a2 * *a1) - (float)(a2[1] * a1[1])) - (float)(a2[2] * a1[2])) - (float)(a2[3] * a1[3]);
a1[1] = v3;
a1[2] = v4;
a1[3] = v5;
return __readfsqword(0x28u) ^ v6;
}