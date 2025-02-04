







# 1 
#include "defs.h"
float * func0(float *a1, float *a2)
{
float *result; // rax
float v3; // [rsp+14h] [rbp-5Ch]
float v4; // [rsp+18h] [rbp-58h]
float v5; // [rsp+1Ch] [rbp-54h]
float v6; // [rsp+20h] [rbp-50h]
float v7; // [rsp+24h] [rbp-4Ch]
float v8; // [rsp+28h] [rbp-48h]
float v9; // [rsp+2Ch] [rbp-44h]
float v10; // [rsp+30h] [rbp-40h]
float v11; // [rsp+30h] [rbp-40h]
float v12; // [rsp+30h] [rbp-40h]
float v13; // [rsp+30h] [rbp-40h]
float v14; // [rsp+30h] [rbp-40h]
float v15; // [rsp+30h] [rbp-40h]
float v16; // [rsp+34h] [rbp-3Ch]
float v17; // [rsp+34h] [rbp-3Ch]
float v18; // [rsp+34h] [rbp-3Ch]
float v19; // [rsp+34h] [rbp-3Ch]
float v20; // [rsp+34h] [rbp-3Ch]
float v21; // [rsp+34h] [rbp-3Ch]
float v22; // [rsp+38h] [rbp-38h]
float v23; // [rsp+3Ch] [rbp-34h]
float v24; // [rsp+40h] [rbp-30h]
float v25; // [rsp+44h] [rbp-2Ch]
float v26; // [rsp+48h] [rbp-28h]
float v27; // [rsp+4Ch] [rbp-24h]
float v28; // [rsp+50h] [rbp-20h]
float v29; // [rsp+54h] [rbp-1Ch]
float v30; // [rsp+58h] [rbp-18h]
float v31; // [rsp+5Ch] [rbp-14h]
float v32; // [rsp+60h] [rbp-10h]
float v33; // [rsp+64h] [rbp-Ch]

v3 = a2[1];
v4 = a2[2];
v5 = a2[3];
v6 = *a1 - a1[9];
v7 = a1[8] + a1[1];
v8 = a1[9] + *a1;
v9 = a1[1] - a1[8];
v10 = a1[4] - a1[13];
v16 = a1[12] + a1[5];
v22 = (float)(v10 - v16) * v3;
v23 = (float)(v16 + v10) * v3;
v11 = a1[13] + a1[4];
v17 = a1[5] - a1[12];
v24 = (float)(v11 - v17) * v3;
v25 = (float)(v17 + v11) * v3;
v12 = a1[2] - a1[11];
v18 = a1[10] + a1[3];
v26 = (float)(v4 * v12) - (float)(v5 * v18);
v27 = (float)(v5 * v12) + (float)(v4 * v18);
v13 = a1[11] + a1[2];
v19 = a1[3] - a1[10];
v28 = (float)(v5 * v13) - (float)(v4 * v19);
v29 = (float)(v4 * v13) + (float)(v5 * v19);
v14 = a1[6] - a1[15];
v20 = a1[14] + a1[7];
v30 = (float)(v5 * v14) - (float)(v4 * v20);
v31 = (float)(v4 * v14) + (float)(v5 * v20);
v15 = a1[15] + a1[6];
v21 = a1[7] - a1[14];
v32 = (float)(v4 * v15) - (float)(v5 * v21);
v33 = (float)(v5 * v15) + (float)(v4 * v21);
*a1 = (float)(v6 + v22) + (float)(v26 + v30);
a1[1] = (float)(v7 + v23) + (float)(v27 + v31);
a1[2] = (float)(v6 + v22) - (float)(v26 + v30);
a1[3] = (float)(v7 + v23) - (float)(v27 + v31);
a1[4] = (float)(v6 - v22) - (float)(v27 - v31);
a1[5] = (float)(v7 - v23) + (float)(v26 - v30);
a1[6] = (float)(v6 - v22) + (float)(v27 - v31);
a1[7] = (float)(v7 - v23) - (float)(v26 - v30);
a1[8] = (float)(v8 - v25) + (float)(v28 - v32);
a1[9] = (float)(v9 + v24) + (float)(v29 - v33);
a1[10] = (float)(v8 - v25) - (float)(v28 - v32);
a1[11] = (float)(v9 + v24) - (float)(v29 - v33);
a1[12] = (float)(v8 + v25) - (float)(v29 + v33);
a1[13] = (float)(v9 - v24) + (float)(v28 + v32);
a1[14] = (float)(v8 + v25) + (float)(v29 + v33);
result = a1 + 15;
a1[15] = (float)(v9 - v24) - (float)(v28 + v32);
return result;
}