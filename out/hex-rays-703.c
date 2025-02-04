
# 1 
#include "defs.h"
double * func0(int a1, __int64 a2, __int64 a3, __int64 a4, double *a5)
{
double *result; // rax
int v6; // [rsp+2Ch] [rbp-5Ch]
int v7; // [rsp+30h] [rbp-58h]
int v8; // [rsp+34h] [rbp-54h]
double v9; // [rsp+38h] [rbp-50h]
double v10; // [rsp+40h] [rbp-48h]
double v11; // [rsp+48h] [rbp-40h]
double v12; // [rsp+50h] [rbp-38h]
double v13; // [rsp+58h] [rbp-30h]
double v14; // [rsp+60h] [rbp-28h]
double v15; // [rsp+68h] [rbp-20h]
double v16; // [rsp+70h] [rbp-18h]
double v17; // [rsp+78h] [rbp-10h]
double v18; // [rsp+80h] [rbp-8h]

v12 = 0.0;
v11 = 0.0;
v10 = 0.0;
v9 = 0.0;
v8 = 0;
v6 = 0;
v7 = 1;
while ( v6 < a1 )
{
v13 = *(double *)(8LL * v8 + a2);
v14 = *(double *)(8LL * v7 + a2);
v15 = *(double *)(8LL * v8 + a3);
v16 = *(double *)(8LL * v7 + a3);
v17 = *(double *)(8LL * v8 + a4);
v18 = *(double *)(8LL * v7 + a4);
v11 = v13 * v15 - v14 * v16 + v11;
v9 = v14 * v15 + v13 * v16 + v9;
v12 = v13 * v17 - v14 * v18 + v12;
v10 = v14 * v17 + v13 * v18 + v10;
++v6;
v8 += 2;
v7 += 2;
}
*a5 = v11;
a5[1] = v9;
a5[2] = v12;
result = a5 + 3;
a5[3] = v10;
return result;
}