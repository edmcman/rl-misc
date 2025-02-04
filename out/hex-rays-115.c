







# 1 
#include "defs.h"
float * func0(float *a1, __int64 a2)
{
float *result; // rax
float v3; // [rsp+1Ch] [rbp-64h]
float v4; // [rsp+20h] [rbp-60h]
float v5; // [rsp+20h] [rbp-60h]
float v6; // [rsp+24h] [rbp-5Ch]
float v7; // [rsp+24h] [rbp-5Ch]
float v8; // [rsp+28h] [rbp-58h]
float v9; // [rsp+28h] [rbp-58h]
float v10; // [rsp+2Ch] [rbp-54h]
float v11; // [rsp+2Ch] [rbp-54h]
float v12; // [rsp+30h] [rbp-50h]
float v13; // [rsp+30h] [rbp-50h]
float v14; // [rsp+34h] [rbp-4Ch]
float v15; // [rsp+34h] [rbp-4Ch]
float v16; // [rsp+38h] [rbp-48h]
float v17; // [rsp+38h] [rbp-48h]
float v18; // [rsp+3Ch] [rbp-44h]
float v19; // [rsp+3Ch] [rbp-44h]
float v20; // [rsp+40h] [rbp-40h]
float v21; // [rsp+44h] [rbp-3Ch]
float v22; // [rsp+48h] [rbp-38h]
float v23; // [rsp+4Ch] [rbp-34h]
float v24; // [rsp+50h] [rbp-30h]
float v25; // [rsp+54h] [rbp-2Ch]
float v26; // [rsp+58h] [rbp-28h]
float v27; // [rsp+5Ch] [rbp-24h]
float v28; // [rsp+70h] [rbp-10h]
float v29; // [rsp+74h] [rbp-Ch]
float v30; // [rsp+78h] [rbp-8h]
float v31; // [rsp+7Ch] [rbp-4h]

v3 = *(float *)(a2 + 4);
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
v28 = (float)((float)(v9 - v19) - (float)(v11 + v17)) * v3;
v29 = (float)((float)(v9 - v19) + (float)(v11 + v17)) * v3;
v30 = (float)((float)(v9 + v19) - (float)(v11 - v17)) * v3;
v31 = (float)((float)(v9 + v19) + (float)(v11 - v17)) * v3;
a1[8] = v24 + v28;
a1[9] = v25 + v29;
a1[10] = v24 - v28;
a1[11] = v25 - v29;
a1[12] = v26 - v31;
a1[13] = v27 + v30;
a1[14] = v26 + v31;
a1[15] = v27 - v30;
*a1 = v20 + (float)(v5 + v13);
a1[1] = v21 + (float)(v7 + v15);
a1[2] = v20 - (float)(v5 + v13);
a1[3] = v21 - (float)(v7 + v15);
a1[4] = v22 - (float)(v7 - v15);
a1[5] = v23 + (float)(v5 - v13);
a1[6] = v22 + (float)(v7 - v15);
result = a1 + 7;
a1[7] = v23 - (float)(v5 - v13);
return result;
}