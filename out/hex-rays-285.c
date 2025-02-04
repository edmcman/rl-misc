#include <stdio.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2)
{
float v2; // xmm0_4
float v3; // xmm0_4
float v4; // xmm0_4
float v5; // xmm0_4
float v6; // xmm0_4
float *result; // rax
float v8; // xmm0_4
double v9; // [rsp+10h] [rbp-70h]
double v10; // [rsp+18h] [rbp-68h]
double v11; // [rsp+20h] [rbp-60h]
double v12; // [rsp+28h] [rbp-58h]
double v13; // [rsp+30h] [rbp-50h]
double v14; // [rsp+38h] [rbp-48h]
double v15; // [rsp+78h] [rbp-8h]

v9 = *a1;
v10 = a1[3];
v11 = a1[5];
v12 = a1[1];
v13 = a1[2];
v14 = a1[4];
v15 = 1.0 / ((v10 * v11 - v14 * v14) * v9 + (v12 * v14 - v13 * v10) * v13 - (v12 * v11 - v13 * v14) * v12);
v2 = (v10 * v11 - v14 * v14) * v15;
*a2 = v2;
v3 = -(v12 * v11 - v13 * v14) * v15;
a2[1] = v3;
v4 = (v12 * v14 - v13 * v10) * v15;
a2[2] = v4;
v5 = (v9 * v11 - v13 * v13) * v15;
a2[3] = v5;
v6 = (v12 * v13 - v9 * v14) * v15;
a2[4] = v6;
result = a2 + 5;
v8 = (v9 * v10 - v12 * v12) * v15;
a2[5] = v8;
return result;
}