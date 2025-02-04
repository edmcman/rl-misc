#include <math.h>

#include <float.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
double * func0(int a1, __int64 a2, __int64 a3, double *a4)
{
double *result; // rax
int i; // [rsp+2Ch] [rbp-24h]
int j; // [rsp+2Ch] [rbp-24h]
double v7; // [rsp+30h] [rbp-20h]
double v8; // [rsp+30h] [rbp-20h]
double v9; // [rsp+38h] [rbp-18h]
double v10; // [rsp+38h] [rbp-18h]
double v11; // [rsp+40h] [rbp-10h]

v7 = 0.0;
v9 = 0.0;
for ( i = 0; i < a1; ++i )
{
v7 = *(double *)(8LL * i + a2) + v7;
v9 = *(double *)(8LL * i + a3) + v9;
}
v8 = v7 / (double)a1;
v10 = v9 / (double)a1;
v11 = 0.0;
for ( j = 0; j < a1; ++j )
v11 = (*(double *)(8LL * j + a3) - v10) * (*(double *)(8LL * j + a2) - v8) + v11;
result = a4;
*a4 = v11 / (double)a1;
return result;
}