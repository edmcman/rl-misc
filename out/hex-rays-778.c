
# 1 
#include "defs.h"
double * func0(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double *a6)
{
double *result; // rax
int v7; // [rsp+34h] [rbp-8Ch]
int v8; // [rsp+38h] [rbp-88h]
int v9; // [rsp+3Ch] [rbp-84h]
double v10; // [rsp+40h] [rbp-80h]
double v11; // [rsp+48h] [rbp-78h]
double v12; // [rsp+50h] [rbp-70h]
double v13; // [rsp+58h] [rbp-68h]
double v14; // [rsp+60h] [rbp-60h]
double v15; // [rsp+68h] [rbp-58h]
double v16; // [rsp+70h] [rbp-50h]
double v17; // [rsp+78h] [rbp-48h]
double v18; // [rsp+80h] [rbp-40h]
double v19; // [rsp+88h] [rbp-38h]
double v20; // [rsp+90h] [rbp-30h]
double v21; // [rsp+98h] [rbp-28h]
double v22; // [rsp+A0h] [rbp-20h]
double v23; // [rsp+A8h] [rbp-18h]
double v24; // [rsp+B0h] [rbp-10h]
double v25; // [rsp+B8h] [rbp-8h]

v17 = 0.0;
v16 = 0.0;
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
v18 = *(double *)(8LL * v9 + a2);
v19 = *(double *)(8LL * v8 + a2);
v20 = *(double *)(8LL * v9 + a3);
v21 = *(double *)(8LL * v8 + a3);
v22 = *(double *)(8LL * v9 + a4);
v23 = *(double *)(8LL * v8 + a4);
v24 = *(double *)(8LL * v9 + a5);
v25 = *(double *)(8LL * v8 + a5);
v14 = v19 * v23 + v18 * v22 + v14;
v10 = v18 * v23 - v19 * v22 + v10;
v15 = v19 * v25 + v18 * v24 + v15;
v11 = v18 * v25 - v19 * v24 + v11;
v16 = v21 * v23 + v20 * v22 + v16;
v12 = v20 * v23 - v21 * v22 + v12;
v17 = v21 * v25 + v20 * v24 + v17;
v13 = v20 * v25 - v21 * v24 + v13;
++v7;
v9 += 2;
v8 += 2;
}
*a6 = v14;
a6[1] = v10;
a6[2] = v15;
a6[3] = v11;
a6[4] = v16;
a6[5] = v12;
a6[6] = v17;
result = a6 + 7;
a6[7] = v13;
return result;
}