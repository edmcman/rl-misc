
# 1 
#include "defs.h"
double * func0(int a1, __int64 a2, __int64 a3, double *a4)
{
double *result; // rax
int v5; // [rsp+24h] [rbp-3Ch]
int v6; // [rsp+28h] [rbp-38h]
int v7; // [rsp+2Ch] [rbp-34h]
double v8; // [rsp+30h] [rbp-30h]
double v9; // [rsp+38h] [rbp-28h]
double v10; // [rsp+40h] [rbp-20h]
double v11; // [rsp+48h] [rbp-18h]
double v12; // [rsp+50h] [rbp-10h]
double v13; // [rsp+58h] [rbp-8h]

v9 = 0.0;
v8 = 0.0;
v7 = 0;
v5 = 0;
v6 = 1;
while ( v5 < a1 )
{
v10 = *(double *)(8LL * v7 + a2);
v11 = *(double *)(8LL * v6 + a2);
v12 = *(double *)(8LL * v7 + a3);
v13 = *(double *)(8LL * v6 + a3);
v9 = v10 * v12 - v11 * v13 + v9;
v8 = v11 * v12 + v10 * v13 + v8;
++v5;
v7 += 2;
v6 += 2;
}
*a4 = v9;
result = a4 + 1;
a4[1] = v8;
return result;
}