#include <math.h>

# 1 
#include "defs.h"
__int64  func0(double *a1, double *a2, double *a3, double *a4, double *a5, double *a6, double *a7, double *a8)
{
double v9; // [rsp+40h] [rbp-B0h]
double v10; // [rsp+48h] [rbp-A8h]
double v11; // [rsp+50h] [rbp-A0h]
double v12; // [rsp+58h] [rbp-98h]
double v13; // [rsp+60h] [rbp-90h]
double v14; // [rsp+70h] [rbp-80h]
double v15; // [rsp+78h] [rbp-78h]
double v16; // [rsp+80h] [rbp-70h]
double v17; // [rsp+90h] [rbp-60h]
double v18; // [rsp+98h] [rbp-58h]
double v19; // [rsp+A0h] [rbp-50h]
double v20; // [rsp+B0h] [rbp-40h]
double v21; // [rsp+B8h] [rbp-38h]
double v22; // [rsp+C0h] [rbp-30h]
double v23; // [rsp+D0h] [rbp-20h]
double v24; // [rsp+D8h] [rbp-18h]
double v25; // [rsp+E0h] [rbp-10h]

v11 = *a4 - *a3;
v12 = a4[1] - a3[1];
v13 = a4[2] - a3[2];
v14 = *a5 - *a3;
v15 = a5[1] - a3[1];
v16 = a5[2] - a3[2];
v20 = v16 * a2[1] - v15 * a2[2];
v21 = v14 * a2[2] - v16 * *a2;
v22 = v15 * *a2 - v14 * a2[1];
v9 = v22 * v13 + v11 * v20 + v21 * v12;
v17 = *a1 - *a3;
v18 = a1[1] - a3[1];
v19 = a1[2] - a3[2];
v10 = 1.0 / v9;
if ( v9 <= 0.00001 )
{
if ( v9 >= -0.00001 )
return 0LL;
*a7 = v22 * v19 + v17 * v20 + v21 * v18;
if ( *a7 > 0.0 || v9 > *a7 )
return 0LL;
v23 = v13 * v18 - v12 * v19;
v24 = v11 * v19 - v13 * v17;
v25 = v12 * v17 - v11 * v18;
*a8 = v25 * a2[2] + *a2 * v23 + v24 * a2[1];
if ( *a8 > 0.0 || v9 > *a7 + *a8 )
return 0LL;
}
else
{
*a7 = v22 * v19 + v17 * v20 + v21 * v18;
if ( *a7 < 0.0 || *a7 > v9 )
return 0LL;
v23 = v13 * v18 - v12 * v19;
v24 = v11 * v19 - v13 * v17;
v25 = v12 * v17 - v11 * v18;
*a8 = v25 * a2[2] + *a2 * v23 + v24 * a2[1];
if ( *a8 < 0.0 || *a8 + *a7 > v9 )
return 0LL;
}
*a6 = (v25 * v16 + v14 * v23 + v24 * v15) * v10;
*a7 = *a7 * v10;
*a8 = *a8 * v10;
return 1LL;
}