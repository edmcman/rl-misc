
# 1 
#include "defs.h"
double * func0(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double *a6)
{
double *result; // rax
int v7; // [rsp+34h] [rbp-7Ch]
int v8; // [rsp+38h] [rbp-78h]
int v9; // [rsp+3Ch] [rbp-74h]
double v10; // [rsp+40h] [rbp-70h]
double v11; // [rsp+48h] [rbp-68h]
double v12; // [rsp+50h] [rbp-60h]
double v13; // [rsp+58h] [rbp-58h]
double v14; // [rsp+60h] [rbp-50h]
double v15; // [rsp+68h] [rbp-48h]
double v16; // [rsp+70h] [rbp-40h]
double v17; // [rsp+78h] [rbp-38h]
double v18; // [rsp+80h] [rbp-30h]
double v19; // [rsp+88h] [rbp-28h]
double v20; // [rsp+90h] [rbp-20h]
double v21; // [rsp+98h] [rbp-18h]
double v22; // [rsp+A0h] [rbp-10h]
double v23; // [rsp+A8h] [rbp-8h]

v15 = 0.0;
v14 = 0.0;
v13 = 0.0;
v12 = 0.0;
v11 = 0.0;
v10 = 0.0;
v9 = 0;
v7 = 0;
v8 = 1;
while ( v7 < a1 )
{
v16 = *(double *)(8LL * v9 + a2);
v17 = *(double *)(8LL * v8 + a2);
v18 = *(double *)(8LL * v9 + a3);
v19 = *(double *)(8LL * v8 + a3);
v20 = *(double *)(8LL * v9 + a4);
v21 = *(double *)(8LL * v8 + a4);
v22 = *(double *)(8LL * v9 + a5);
v23 = *(double *)(8LL * v8 + a5);
v13 = v16 * v18 - v17 * v19 + v13;
v10 = v17 * v18 + v16 * v19 + v10;
v14 = v16 * v20 - v17 * v21 + v14;
v11 = v17 * v20 + v16 * v21 + v11;
v15 = v16 * v22 - v17 * v23 + v15;
v12 = v17 * v22 + v16 * v23 + v12;
++v7;
v9 += 2;
v8 += 2;
}
*a6 = v13;
a6[1] = v10;
a6[2] = v14;
a6[3] = v11;
a6[4] = v15;
result = a6 + 5;
a6[5] = v12;
return result;
}