
# 1 
#include "defs.h"
double * func0(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, double *a8)
{
double *result; // rax
int v9; // [rsp+34h] [rbp-FCh]
int v10; // [rsp+38h] [rbp-F8h]
int v11; // [rsp+3Ch] [rbp-F4h]
double v12; // [rsp+40h] [rbp-F0h]
double v13; // [rsp+48h] [rbp-E8h]
double v14; // [rsp+50h] [rbp-E0h]
double v15; // [rsp+58h] [rbp-D8h]
double v16; // [rsp+60h] [rbp-D0h]
double v17; // [rsp+68h] [rbp-C8h]
double v18; // [rsp+70h] [rbp-C0h]
double v19; // [rsp+78h] [rbp-B8h]
double v20; // [rsp+80h] [rbp-B0h]
double v21; // [rsp+88h] [rbp-A8h]
double v22; // [rsp+90h] [rbp-A0h]
double v23; // [rsp+98h] [rbp-98h]
double v24; // [rsp+A0h] [rbp-90h]
double v25; // [rsp+A8h] [rbp-88h]
double v26; // [rsp+B0h] [rbp-80h]
double v27; // [rsp+B8h] [rbp-78h]
double v28; // [rsp+C0h] [rbp-70h]
double v29; // [rsp+C8h] [rbp-68h]
double v30; // [rsp+D0h] [rbp-60h]
double v31; // [rsp+D8h] [rbp-58h]
double v32; // [rsp+E0h] [rbp-50h]
double v33; // [rsp+E8h] [rbp-48h]
double v34; // [rsp+F0h] [rbp-40h]
double v35; // [rsp+F8h] [rbp-38h]
double v36; // [rsp+100h] [rbp-30h]
double v37; // [rsp+108h] [rbp-28h]
double v38; // [rsp+110h] [rbp-20h]
double v39; // [rsp+118h] [rbp-18h]
double v40; // [rsp+120h] [rbp-10h]
double v41; // [rsp+128h] [rbp-8h]

v29 = 0.0;
v28 = 0.0;
v27 = 0.0;
v26 = 0.0;
v25 = 0.0;
v24 = 0.0;
v23 = 0.0;
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
v11 = 0;
v9 = 0;
v10 = 1;
while ( v9 < a1 )
{
v30 = *(double *)(8LL * v11 + a2);
v31 = *(double *)(8LL * v10 + a2);
v32 = *(double *)(8LL * v11 + a3);
v33 = *(double *)(8LL * v10 + a3);
v34 = *(double *)(8LL * v11 + a4);
v35 = *(double *)(8LL * v10 + a4);
v36 = *(double *)(8LL * v11 + a5);
v37 = *(double *)(8LL * v10 + a5);
v38 = *(double *)(8LL * v11 + a6);
v39 = *(double *)(8LL * v10 + a6);
v40 = *(double *)(8LL * v11 + a7);
v41 = *(double *)(8LL * v10 + a7);
v21 = v30 * v36 - v31 * v37 + v21;
v12 = v31 * v36 + v30 * v37 + v12;
v22 = v30 * v38 - v31 * v39 + v22;
v13 = v31 * v38 + v30 * v39 + v13;
v23 = v30 * v40 - v31 * v41 + v23;
v14 = v31 * v40 + v30 * v41 + v14;
v24 = v32 * v36 - v33 * v37 + v24;
v15 = v33 * v36 + v32 * v37 + v15;
v25 = v32 * v38 - v33 * v39 + v25;
v16 = v33 * v38 + v32 * v39 + v16;
v26 = v32 * v40 - v33 * v41 + v26;
v17 = v33 * v40 + v32 * v41 + v17;
v27 = v34 * v36 - v35 * v37 + v27;
v18 = v35 * v36 + v34 * v37 + v18;
v28 = v34 * v38 - v35 * v39 + v28;
v19 = v35 * v38 + v34 * v39 + v19;
v29 = v34 * v40 - v35 * v41 + v29;
v20 = v35 * v40 + v34 * v41 + v20;
++v9;
v11 += 2;
v10 += 2;
}
*a8 = v21;
a8[1] = v12;
a8[2] = v22;
a8[3] = v13;
a8[4] = v23;
a8[5] = v14;
a8[6] = v24;
a8[7] = v15;
a8[8] = v25;
a8[9] = v16;
a8[10] = v26;
a8[11] = v17;
a8[12] = v27;
a8[13] = v18;
a8[14] = v28;
a8[15] = v19;
a8[16] = v29;
result = a8 + 17;
a8[17] = v20;
return result;
}