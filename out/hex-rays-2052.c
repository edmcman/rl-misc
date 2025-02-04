
# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3, float a4)
{
float v4; // xmm0_4
float v5; // xmm0_4
float *result; // rax
float v7; // xmm0_4
float v8; // [rsp+1Ch] [rbp-Ch]
float v9; // [rsp+20h] [rbp-8h]
float v10; // [rsp+24h] [rbp-4h]

v8 = 1.0 / (float)(a3 - a2);
v9 = 1.0 / (float)(a4 - a2);
v10 = 1.0 / (float)(a4 - a3);
a1[1] = (float)((float)(v8 * v8) * v9) * v9;
v4 = a1[1] * ((float)(v9 + v8) + (float)(v9 + v8));
*a1 = v4;
a1[3] = (float)((float)(v10 * v10) * v8) * v8;
v5 = a1[3] * ((float)(v10 - v8) + (float)(v10 - v8));
a1[2] = v5;
a1[5] = (float)((float)(v10 * v10) * v9) * v9;
result = a1 + 4;
v7 = a1[5] * ((float)(v10 + v9) * -2.0);
a1[4] = v7;
return result;
}