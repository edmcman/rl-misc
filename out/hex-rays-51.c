#include <math.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float v4; // [rsp+24h] [rbp-1Ch]
float v5; // [rsp+28h] [rbp-18h]
float v6; // [rsp+2Ch] [rbp-14h]

v4 = (float)((float)(a2[3] * a1[2]) + (float)((float)(*a1 * a2[1]) + (float)(a1[1] * *a2))) - (float)(a2[2] * a1[3]);
v5 = (float)((float)(a2[1] * a1[3]) + (float)((float)(*a1 * a2[2]) + (float)(a1[2] * *a2))) - (float)(a2[3] * a1[1]);
v6 = (float)((float)(a2[2] * a1[1]) + (float)((float)(*a1 * a2[3]) + (float)(a1[3] * *a2))) - (float)(a2[1] * a1[2]);
*a3 = (float)(*a2 * *a1) - (float)((float)(a2[3] * a1[3]) + (float)((float)(a1[1] * a2[1]) + (float)(a2[2] * a1[2])));
a3[1] = v4;
a3[2] = v5;
a3[3] = v6;
return a3;
}