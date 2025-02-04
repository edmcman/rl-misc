






# 1 
#include "defs.h"
double * func0(double *a1, __int64 a2)
{
double *result; // rax
double v3; // [rsp+18h] [rbp-C8h]
double v4; // [rsp+20h] [rbp-C0h]
double v5; // [rsp+20h] [rbp-C0h]
double v6; // [rsp+28h] [rbp-B8h]
double v7; // [rsp+28h] [rbp-B8h]
double v8; // [rsp+30h] [rbp-B0h]
double v9; // [rsp+30h] [rbp-B0h]
double v10; // [rsp+38h] [rbp-A8h]
double v11; // [rsp+38h] [rbp-A8h]
double v12; // [rsp+40h] [rbp-A0h]
double v13; // [rsp+40h] [rbp-A0h]
double v14; // [rsp+48h] [rbp-98h]
double v15; // [rsp+48h] [rbp-98h]
double v16; // [rsp+50h] [rbp-90h]
double v17; // [rsp+50h] [rbp-90h]
double v18; // [rsp+58h] [rbp-88h]
double v19; // [rsp+58h] [rbp-88h]
double v20; // [rsp+60h] [rbp-80h]
double v21; // [rsp+68h] [rbp-78h]
double v22; // [rsp+70h] [rbp-70h]
double v23; // [rsp+78h] [rbp-68h]
double v24; // [rsp+80h] [rbp-60h]
double v25; // [rsp+88h] [rbp-58h]
double v26; // [rsp+90h] [rbp-50h]
double v27; // [rsp+98h] [rbp-48h]
double v28; // [rsp+C0h] [rbp-20h]
double v29; // [rsp+C8h] [rbp-18h]
double v30; // [rsp+D0h] [rbp-10h]
double v31; // [rsp+D8h] [rbp-8h]

v3 = *(double *)(a2 + 8);
v4 = a1[8] + *a1;
v6 = a1[9] + a1[1];
v8 = *a1 - a1[8];
v10 = a1[1] - a1[9];
v12 = a1[12] + a1[4];
v14 = a1[13] + a1[5];
v16 = a1[4] - a1[12];
v18 = a1[5] - a1[13];
v20 = v4 + v12;
v21 = v6 + v14;
v22 = v4 - v12;
v23 = v6 - v14;
v24 = v8 - v18;
v25 = v10 + v16;
v26 = v8 + v18;
v27 = v10 - v16;
v5 = a1[10] + a1[2];
v7 = a1[11] + a1[3];
v9 = a1[2] - a1[10];
v11 = a1[3] - a1[11];
v13 = a1[14] + a1[6];
v15 = a1[15] + a1[7];
v17 = a1[6] - a1[14];
v19 = a1[7] - a1[15];
v28 = (v9 - v19 - (v11 + v17)) * v3;
v29 = (v9 - v19 + v11 + v17) * v3;
v30 = (v9 + v19 - (v11 - v17)) * v3;
v31 = (v9 + v19 + v11 - v17) * v3;
a1[8] = v24 + v28;
a1[9] = v25 + v29;
a1[10] = v24 - v28;
a1[11] = v25 - v29;
a1[12] = v26 - v31;
a1[13] = v27 + v30;
a1[14] = v26 + v31;
a1[15] = v27 - v30;
*a1 = v20 + v5 + v13;
a1[1] = v21 + v7 + v15;
a1[2] = v20 - (v5 + v13);
a1[3] = v21 - (v7 + v15);
a1[4] = v22 - (v7 - v15);
a1[5] = v23 + v5 - v13;
a1[6] = v22 + v7 - v15;
result = a1 + 7;
a1[7] = v23 - (v5 - v13);
return result;
}