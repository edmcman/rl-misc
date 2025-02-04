#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
float * func0(__int64 a1, __int64 a2, __int64 a3, int a4, float *a5, float *a6)
{
float v6; // xmm0_4
float v7; // xmm0_4
float *result; // rax
int i; // [rsp+3Ch] [rbp-44h]
double v10; // [rsp+40h] [rbp-40h]
double v11; // [rsp+48h] [rbp-38h]
double v12; // [rsp+50h] [rbp-30h]
double v13; // [rsp+58h] [rbp-28h]
double v14; // [rsp+60h] [rbp-20h]
double v15; // [rsp+68h] [rbp-18h]

v14 = 0.0;
v13 = 0.0;
v12 = 0.0;
v11 = 0.0;
v10 = 0.0;
for ( i = 0; i < a4; ++i )
{
v10 = 1.0 / *(float *)(4LL * i + a3) + v10;
v11 = (float)(*(float *)(4LL * i + a1) / *(float *)(4LL * i + a3)) + v11;
v12 = (float)(*(float *)(4LL * i + a2) / *(float *)(4LL * i + a3)) + v12;
v13 = (float)((float)(*(float *)(4LL * i + a1) * *(float *)(4LL * i + a1)) / *(float *)(4LL * i + a3)) + v13;
v14 = (float)((float)(*(float *)(4LL * i + a2) * *(float *)(4LL * i + a1)) / *(float *)(4LL * i + a3)) + v14;
}
v15 = v10 * v13 - v11 * v11;
v6 = (v10 * v14 - v11 * v12) / v15;
*a5 = v6;
v7 = (v13 * v12 - v11 * v14) / v15;
result = a6;
*a6 = v7;
return result;
}