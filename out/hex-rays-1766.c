
# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3, float a4, float a5)
{
float v5; // xmm0_4
float v6; // xmm0_4
float *result; // rax
float v8; // [rsp+20h] [rbp-18h]
float v9; // [rsp+24h] [rbp-14h]
float v10; // [rsp+28h] [rbp-10h]
float v11; // [rsp+2Ch] [rbp-Ch]
float v12; // [rsp+30h] [rbp-8h]
float v13; // [rsp+34h] [rbp-4h]

v8 = 1.0 / (float)(a3 - a2);
v9 = 1.0 / (float)(a4 - a2);
v10 = 1.0 / (float)(a4 - a3);
v11 = 1.0 / (float)(a5 - a2);
v12 = 1.0 / (float)(a5 - a3);
v13 = 1.0 / (float)(a5 - a4);
*a1 = (float)((float)((float)((float)-(float)(1.0 / (float)(a3 - a2)) * v8) * v9) * v9) * v11;
v5 = v10 * (-(v10 + v10 + v12 - v8) * v8 * v12 * v10);
a1[1] = v5;
a1[2] = (float)((float)((float)-v8 * v12) * v10) * v10;
v6 = v10 * (-(v13 - (v10 + v10) - v9) * v13 * v9 * v10);
a1[3] = v6;
a1[4] = (float)((float)((float)-v13 * v9) * v10) * v10;
result = a1 + 5;
a1[5] = (float)((float)((float)(v11 * v12) * v12) * v13) * v13;
return result;
}