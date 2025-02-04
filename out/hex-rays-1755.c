#include <math.h>

#include <stdint.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
double * func0(__int64 a1, __int64 a2, int a3, double *a4, double *a5, double *a6)
{
double *result; // rax
unsigned int i; // [rsp+3Ch] [rbp-34h]
double v8; // [rsp+40h] [rbp-30h]
double v9; // [rsp+48h] [rbp-28h]
double v10; // [rsp+50h] [rbp-20h]
double v11; // [rsp+58h] [rbp-18h]
double v12; // [rsp+60h] [rbp-10h]
double v13; // [rsp+68h] [rbp-8h]

v8 = 0.0;
v9 = 0.0;
v10 = 0.0;
v11 = 0.0;
v12 = 0.0;
for ( i = 0; i < a3; ++i )
{
v8 = *(double *)(8LL * i + a1) + v8;
v9 = *(double *)(8LL * i + a2) + v9;
v10 = *(double *)(8LL * i + a1) * *(double *)(8LL * i + a1) + v10;
v11 = *(double *)(8LL * i + a2) * *(double *)(8LL * i + a2) + v11;
v12 = *(double *)(8LL * i + a2) * *(double *)(8LL * i + a1) + v12;
}
v13 = (double)a3 * v10 - v8 * v8;
if ( v13 == 0.0 )
{
*a6 = 0.0;
*a5 = *a6;
result = a4;
*a4 = *a5;
}
else
{
*a4 = (v9 * v10 - v8 * v12) / v13;
*a5 = ((double)a3 * v12 - v8 * v9) / v13;
result = (double *)(unsigned int)a3;
if ( ((double)a3 * v11 - v9 * v9) * ((double)a3 * v10 - v8 * v8) <= 0.0 )
{
*a6 = 0.0;
*a5 = *a6;
result = a4;
*a4 = *a5;
}
}
return result;
}