
# 1 
#include "defs.h"
unsigned __int64  func0(float *a1, float *a2, float *a3)
{
float v4; // [rsp+24h] [rbp-2Ch]
float v5; // [rsp+28h] [rbp-28h]
float v6; // [rsp+2Ch] [rbp-24h]
float v7; // [rsp+30h] [rbp-20h]
float v8; // [rsp+34h] [rbp-1Ch]
float v9; // [rsp+38h] [rbp-18h]
float v10; // [rsp+3Ch] [rbp-14h]
float v11; // [rsp+40h] [rbp-10h]
unsigned __int64 v12; // [rsp+48h] [rbp-8h]

v12 = __readfsqword(0x28u);
v4 = (float)(a2[7] * a1[2]) + (float)((float)(*a1 * a2[1]) + (float)(a2[4] * a1[1]));
v5 = (float)(a2[8] * a1[2]) + (float)((float)(*a1 * a2[2]) + (float)(a2[5] * a1[1]));
v6 = (float)(a2[6] * a1[5]) + (float)((float)(a1[3] * *a2) + (float)(a2[3] * a1[4]));
v7 = (float)(a2[7] * a1[5]) + (float)((float)(a1[3] * a2[1]) + (float)(a2[4] * a1[4]));
v8 = (float)(a2[8] * a1[5]) + (float)((float)(a1[3] * a2[2]) + (float)(a2[5] * a1[4]));
v9 = (float)(a2[6] * a1[8]) + (float)((float)(a1[6] * *a2) + (float)(a2[3] * a1[7]));
v10 = (float)(a2[7] * a1[8]) + (float)((float)(a1[6] * a2[1]) + (float)(a2[4] * a1[7]));
v11 = (float)(a2[8] * a1[8]) + (float)((float)(a1[6] * a2[2]) + (float)(a2[5] * a1[7]));
*a3 = (float)(a2[6] * a1[2]) + (float)((float)(*a1 * *a2) + (float)(a2[3] * a1[1]));
a3[1] = v4;
a3[2] = v5;
a3[3] = v6;
a3[4] = v7;
a3[5] = v8;
a3[6] = v9;
a3[7] = v10;
a3[8] = v11;
return __readfsqword(0x28u) ^ v12;
}