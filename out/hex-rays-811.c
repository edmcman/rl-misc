#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
#include "defs.h"
__int64  func0(float *a1, float *a2, float *a3, float *a4)
{
double v4; // xmm0_8
double v5; // xmm0_8
double v6; // xmm0_8
double v7; // xmm0_8
float v9; // xmm0_4
float v10; // xmm0_4
float v11; // xmm0_4
double v12; // [rsp+20h] [rbp-80h]
double v13; // [rsp+28h] [rbp-78h]
double v14; // [rsp+30h] [rbp-70h]
double v15; // [rsp+38h] [rbp-68h]
double v16; // [rsp+40h] [rbp-60h]
double v17; // [rsp+50h] [rbp-50h]
double v18; // [rsp+58h] [rbp-48h]
double v19; // [rsp+60h] [rbp-40h]
double v20; // [rsp+68h] [rbp-38h]
double v21; // [rsp+70h] [rbp-30h]
double v22; // [rsp+78h] [rbp-28h]
double v23; // [rsp+80h] [rbp-20h]
double v24; // [rsp+90h] [rbp-10h]

v12 = (float)(*a1 - *a2) + (float)(*a1 - *a2);
v4 = (float)(a1[1] - a2[1]);
v13 = v4 + v4;
v5 = (float)(a1[2] - a2[2]);
v14 = v5 + v5;
v15 = (float)(*a1 - *a3) + (float)(*a1 - *a3);
v6 = (float)(a1[1] - a3[1]);
v16 = v6 + v6;
v7 = (float)(a1[2] - a3[2]);
v17 = (float)((float)((float)(a2[2] * a3[1])
+ (float)((float)((float)(a1[2] * a2[1]) + (float)((float)(a3[2] * a1[1]) - (float)(a1[2] * a3[1])))
- (float)(a2[2] * a1[1])))
- (float)(a3[2] * a2[1]));
v18 = (float)((float)((float)(a2[2] * *a1)
+ (float)((float)((float)(a1[2] * *a3) + (float)((float)(a3[2] * *a2) - (float)(a1[2] * *a2)))
- (float)(a2[2] * *a3)))
- (float)(a3[2] * *a1));
v19 = (float)((float)((float)(a3[1] * *a1)
+ (float)((float)((float)(a2[1] * *a3) + (float)((float)(a1[1] * *a2) - (float)(a3[1] * *a2)))
- (float)(a1[1] * *a3)))
- (float)(a2[1] * *a1));
v20 = (float)((float)((float)(a1[2] * a1[2]) + (float)((float)(*a1 * *a1) + (float)(a1[1] * a1[1])))
- (float)((float)(a2[2] * a2[2]) + (float)((float)(*a2 * *a2) + (float)(a2[1] * a2[1]))));
v21 = (float)((float)((float)(a1[2] * a1[2]) + (float)((float)(*a1 * *a1) + (float)(a1[1] * a1[1])))
- (float)((float)(a3[2] * a3[2]) + (float)((float)(*a3 * *a3) + (float)(a3[1] * a3[1]))));
v22 = -(float)((float)((float)((float)((float)(a3[2] * (float)(*a1 * a2[1]))
+ (float)((float)((float)(*a2 * a3[1]) * a1[2])
+ (float)(a2[2] * (float)(*a3 * a1[1]))))
- (float)(a3[2] * (float)(*a2 * a1[1])))
- (float)(a1[2] * (float)(*a3 * a2[1])))
- (float)(a2[2] * (float)(*a1 * a3[1])));
v23 = (v15 * v18 - v17 * v16) * v14 + (v16 * v19 - v18 * (v7 + v7)) * v12 - (v15 * v19 - v17 * (v7 + v7)) * v13;
v24 = (v15 * v22 - v17 * v21) * v14 + (v21 * v19 - v22 * (v7 + v7)) * v12 - (v15 * v19 - v17 * (v7 + v7)) * v20;
if ( v23 == 0.0 )
return 0xFFFFFFFFLL;
v9 = ((v21 * v18 - v22 * v16) * v14 + (v16 * v19 - v18 * (v7 + v7)) * v20 - (v21 * v19 - v22 * (v7 + v7)) * v13) / v23;
*a4 = v9;
v10 = v24 / v23;
a4[1] = v10;
v11 = ((v15 * v18 - v17 * v16) * v20 + (v16 * v22 - v18 * v21) * v12 - (v15 * v22 - v17 * v21) * v13) / v23;
a4[2] = v11;
return 0LL;
}