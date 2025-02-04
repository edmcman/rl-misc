






# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double *result; // rax
double v3; // [rsp+18h] [rbp-B8h]
double v4; // [rsp+20h] [rbp-B0h]
double v5; // [rsp+28h] [rbp-A8h]
double v6; // [rsp+30h] [rbp-A0h]
double v7; // [rsp+38h] [rbp-98h]
double v8; // [rsp+40h] [rbp-90h]
double v9; // [rsp+48h] [rbp-88h]
double v10; // [rsp+50h] [rbp-80h]
double v11; // [rsp+50h] [rbp-80h]
double v12; // [rsp+50h] [rbp-80h]
double v13; // [rsp+50h] [rbp-80h]
double v14; // [rsp+50h] [rbp-80h]
double v15; // [rsp+50h] [rbp-80h]
double v16; // [rsp+58h] [rbp-78h]
double v17; // [rsp+58h] [rbp-78h]
double v18; // [rsp+58h] [rbp-78h]
double v19; // [rsp+58h] [rbp-78h]
double v20; // [rsp+58h] [rbp-78h]
double v21; // [rsp+58h] [rbp-78h]
double v22; // [rsp+60h] [rbp-70h]
double v23; // [rsp+68h] [rbp-68h]
double v24; // [rsp+70h] [rbp-60h]
double v25; // [rsp+78h] [rbp-58h]
double v26; // [rsp+80h] [rbp-50h]
double v27; // [rsp+88h] [rbp-48h]
double v28; // [rsp+90h] [rbp-40h]
double v29; // [rsp+98h] [rbp-38h]
double v30; // [rsp+A0h] [rbp-30h]
double v31; // [rsp+A8h] [rbp-28h]
double v32; // [rsp+B0h] [rbp-20h]
double v33; // [rsp+B8h] [rbp-18h]

v3 = a2[1];
v4 = a2[2];
v5 = a2[3];
v6 = *a1 - a1[9];
v7 = a1[8] + a1[1];
v8 = a1[9] + *a1;
v9 = a1[1] - a1[8];
v10 = a1[4] - a1[13];
v16 = a1[12] + a1[5];
v22 = (v10 - v16) * v3;
v23 = (v16 + v10) * v3;
v11 = a1[13] + a1[4];
v17 = a1[5] - a1[12];
v24 = (v11 - v17) * v3;
v25 = (v17 + v11) * v3;
v12 = a1[2] - a1[11];
v18 = a1[10] + a1[3];
v26 = v4 * v12 - v5 * v18;
v27 = v5 * v12 + v4 * v18;
v13 = a1[11] + a1[2];
v19 = a1[3] - a1[10];
v28 = v5 * v13 - v4 * v19;
v29 = v4 * v13 + v5 * v19;
v14 = a1[6] - a1[15];
v20 = a1[14] + a1[7];
v30 = v5 * v14 - v4 * v20;
v31 = v4 * v14 + v5 * v20;
v15 = a1[15] + a1[6];
v21 = a1[7] - a1[14];
v32 = v4 * v15 - v5 * v21;
v33 = v5 * v15 + v4 * v21;
*a1 = v6 + v22 + v26 + v30;
a1[1] = v7 + v23 + v27 + v31;
a1[2] = v6 + v22 - (v26 + v30);
a1[3] = v7 + v23 - (v27 + v31);
a1[4] = v6 - v22 - (v27 - v31);
a1[5] = v7 - v23 + v26 - v30;
a1[6] = v6 - v22 + v27 - v31;
a1[7] = v7 - v23 - (v26 - v30);
a1[8] = v8 - v25 + v28 - v32;
a1[9] = v9 + v24 + v29 - v33;
a1[10] = v8 - v25 - (v28 - v32);
a1[11] = v9 + v24 - (v29 - v33);
a1[12] = v8 + v25 - (v29 + v33);
a1[13] = v9 - v24 + v28 + v32;
a1[14] = v8 + v25 + v29 + v33;
result = a1 + 15;
a1[15] = v9 - v24 - (v28 + v32);
return result;
}