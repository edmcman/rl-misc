#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
unsigned __int64  func0(float *a1, float *a2)
{
float v3; // [rsp+14h] [rbp-4Ch]
float v4; // [rsp+18h] [rbp-48h]
float v5; // [rsp+1Ch] [rbp-44h]
float v6; // [rsp+20h] [rbp-40h]
float v7; // [rsp+24h] [rbp-3Ch]
float v8; // [rsp+28h] [rbp-38h]
float v9; // [rsp+2Ch] [rbp-34h]
float v10; // [rsp+30h] [rbp-30h]
float v11; // [rsp+34h] [rbp-2Ch]
float v12; // [rsp+38h] [rbp-28h]
float v13; // [rsp+3Ch] [rbp-24h]
float v14; // [rsp+40h] [rbp-20h]
float v15; // [rsp+44h] [rbp-1Ch]
float v16; // [rsp+48h] [rbp-18h]
float v17; // [rsp+4Ch] [rbp-14h]
unsigned __int64 v18; // [rsp+58h] [rbp-8h]

v18 = __readfsqword(0x28u);
v3 = (float)(a2[3] * a1[13])
+ (float)((float)((float)(a1[1] * *a2) + (float)(a2[1] * a1[5])) + (float)(a2[2] * a1[9]));
v4 = (float)(a2[3] * a1[14])
+ (float)((float)((float)(a1[2] * *a2) + (float)(a2[1] * a1[6])) + (float)(a2[2] * a1[10]));
v5 = (float)(a2[3] * a1[15])
+ (float)((float)((float)(a1[3] * *a2) + (float)(a2[1] * a1[7])) + (float)(a2[2] * a1[11]));
v6 = (float)(a2[7] * a1[12])
+ (float)((float)((float)(*a1 * a2[4]) + (float)(a2[5] * a1[4])) + (float)(a2[6] * a1[8]));
v7 = (float)(a2[7] * a1[13])
+ (float)((float)((float)(a1[1] * a2[4]) + (float)(a2[5] * a1[5])) + (float)(a2[6] * a1[9]));
v8 = (float)(a2[7] * a1[14])
+ (float)((float)((float)(a1[2] * a2[4]) + (float)(a2[5] * a1[6])) + (float)(a2[6] * a1[10]));
v9 = (float)(a2[7] * a1[15])
+ (float)((float)((float)(a1[3] * a2[4]) + (float)(a2[5] * a1[7])) + (float)(a2[6] * a1[11]));
v10 = (float)(a2[11] * a1[12])
+ (float)((float)((float)(*a1 * a2[8]) + (float)(a2[9] * a1[4])) + (float)(a2[10] * a1[8]));
v11 = (float)(a2[11] * a1[13])
+ (float)((float)((float)(a1[1] * a2[8]) + (float)(a2[9] * a1[5])) + (float)(a2[10] * a1[9]));
v12 = (float)(a2[11] * a1[14])
+ (float)((float)((float)(a1[2] * a2[8]) + (float)(a2[9] * a1[6])) + (float)(a2[10] * a1[10]));
v13 = (float)(a2[11] * a1[15])
+ (float)((float)((float)(a1[3] * a2[8]) + (float)(a2[9] * a1[7])) + (float)(a2[10] * a1[11]));
v14 = (float)(a2[15] * a1[12])
+ (float)((float)((float)(*a1 * a2[12]) + (float)(a2[13] * a1[4])) + (float)(a2[14] * a1[8]));
v15 = (float)(a2[15] * a1[13])
+ (float)((float)((float)(a1[1] * a2[12]) + (float)(a2[13] * a1[5])) + (float)(a2[14] * a1[9]));
v16 = (float)(a2[15] * a1[14])
+ (float)((float)((float)(a1[2] * a2[12]) + (float)(a2[13] * a1[6])) + (float)(a2[14] * a1[10]));
v17 = (float)(a2[15] * a1[15])
+ (float)((float)((float)(a1[3] * a2[12]) + (float)(a2[13] * a1[7])) + (float)(a2[14] * a1[11]));
*a1 = (float)(a2[3] * a1[12]) + (float)((float)((float)(*a1 * *a2) + (float)(a2[1] * a1[4])) + (float)(a2[2] * a1[8]));
a1[1] = v3;
a1[2] = v4;
a1[3] = v5;
a1[4] = v6;
a1[5] = v7;
a1[6] = v8;
a1[7] = v9;
a1[8] = v10;
a1[9] = v11;
a1[10] = v12;
a1[11] = v13;
a1[12] = v14;
a1[13] = v15;
a1[14] = v16;
a1[15] = v17;
return __readfsqword(0x28u) ^ v18;
}