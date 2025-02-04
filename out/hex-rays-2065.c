
# 1 
#include "defs.h"
double * func0(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double *a7)
{
double *result; // rax
int v8; // [rsp+34h] [rbp-BCh]
int v9; // [rsp+38h] [rbp-B8h]
int v10; // [rsp+3Ch] [rbp-B4h]
double v11; // [rsp+40h] [rbp-B0h]
double v12; // [rsp+48h] [rbp-A8h]
double v13; // [rsp+50h] [rbp-A0h]
double v14; // [rsp+58h] [rbp-98h]
double v15; // [rsp+60h] [rbp-90h]
double v16; // [rsp+68h] [rbp-88h]
double v17; // [rsp+70h] [rbp-80h]
double v18; // [rsp+78h] [rbp-78h]
double v19; // [rsp+80h] [rbp-70h]
double v20; // [rsp+88h] [rbp-68h]
double v21; // [rsp+90h] [rbp-60h]
double v22; // [rsp+98h] [rbp-58h]
double v23; // [rsp+A0h] [rbp-50h]
double v24; // [rsp+A8h] [rbp-48h]
double v25; // [rsp+B0h] [rbp-40h]
double v26; // [rsp+B8h] [rbp-38h]
double v27; // [rsp+C0h] [rbp-30h]
double v28; // [rsp+C8h] [rbp-28h]
double v29; // [rsp+D0h] [rbp-20h]
double v30; // [rsp+D8h] [rbp-18h]
double v31; // [rsp+E0h] [rbp-10h]
double v32; // [rsp+E8h] [rbp-8h]

v22 = 0.0;
v21 = 0.0;
v20 = 0.0;
v19 = 0.0;
v18 = 0.0;
v17 = 0.0;
v16 = 0.0;
v15 = 0.0;
v14 = 0.0;
v13 = 0.0;
v12 = 0.0;
v11 = 0.0;
v10 = 0;
v8 = 0;
v9 = 1;
while ( v8 < a1 )
{
v23 = *(double *)(8LL * v10 + a2);
v24 = *(double *)(8LL * v9 + a2);
v25 = *(double *)(8LL * v10 + a3);
v26 = *(double *)(8LL * v9 + a3);
v27 = *(double *)(8LL * v10 + a4);
v28 = *(double *)(8LL * v9 + a4);
v29 = *(double *)(8LL * v10 + a5);
v30 = *(double *)(8LL * v9 + a5);
v31 = *(double *)(8LL * v10 + a6);
v32 = *(double *)(8LL * v9 + a6);
v17 = v24 * v28 + v23 * v27 + v17;
v11 = v23 * v28 - v24 * v27 + v11;
v18 = v24 * v30 + v23 * v29 + v18;
v12 = v23 * v30 - v24 * v29 + v12;
v19 = v24 * v32 + v23 * v31 + v19;
v13 = v23 * v32 - v24 * v31 + v13;
v20 = v26 * v28 + v25 * v27 + v20;
v14 = v25 * v28 - v26 * v27 + v14;
v21 = v26 * v30 + v25 * v29 + v21;
v15 = v25 * v30 - v26 * v29 + v15;
v22 = v26 * v32 + v25 * v31 + v22;
v16 = v25 * v32 - v26 * v31 + v16;
++v8;
v10 += 2;
v9 += 2;
}
*a7 = v17;
a7[1] = v11;
a7[2] = v18;
a7[3] = v12;
a7[4] = v19;
a7[5] = v13;
a7[6] = v20;
a7[7] = v14;
a7[8] = v21;
a7[9] = v15;
a7[10] = v22;
result = a7 + 11;
a7[11] = v16;
return result;
}