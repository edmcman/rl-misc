#include <math.h>

# 1 
#include "defs.h"
float * func0(float *a1)
{
float *result; // rax
float v2; // [rsp+18h] [rbp-30h]
float v3; // [rsp+1Ch] [rbp-2Ch]
float v4; // [rsp+1Ch] [rbp-2Ch]
float v5; // [rsp+1Ch] [rbp-2Ch]
float v6; // [rsp+20h] [rbp-28h]
float v7; // [rsp+20h] [rbp-28h]
float v8; // [rsp+20h] [rbp-28h]
float v9; // [rsp+20h] [rbp-28h]
float v10; // [rsp+24h] [rbp-24h]
float v11; // [rsp+24h] [rbp-24h]
float v12; // [rsp+24h] [rbp-24h]
float v13; // [rsp+24h] [rbp-24h]
float v14; // [rsp+28h] [rbp-20h]
float v15; // [rsp+28h] [rbp-20h]
float v16; // [rsp+28h] [rbp-20h]
float v17; // [rsp+2Ch] [rbp-1Ch]
float v18; // [rsp+2Ch] [rbp-1Ch]
float v19; // [rsp+2Ch] [rbp-1Ch]
float v20; // [rsp+30h] [rbp-18h]
float v21; // [rsp+30h] [rbp-18h]
float v22; // [rsp+34h] [rbp-14h]
float v23; // [rsp+34h] [rbp-14h]
float v24; // [rsp+38h] [rbp-10h]
float v25; // [rsp+38h] [rbp-10h]
float v26; // [rsp+3Ch] [rbp-Ch]
float v27; // [rsp+3Ch] [rbp-Ch]
float v28; // [rsp+40h] [rbp-8h]
float v29; // [rsp+40h] [rbp-8h]
float v30; // [rsp+44h] [rbp-4h]
float v31; // [rsp+44h] [rbp-4h]

v3 = a1[1];
v6 = a1[4];
v10 = a1[5];
v14 = a1[2];
v17 = a1[3];
v20 = a1[6];
v22 = a1[7];
v24 = *a1 + v6;
v26 = v3 + v10;
v7 = *a1 - v6;
v11 = v3 - v10;
v28 = v14 - v20;
v30 = v17 - v22;
v15 = v14 + v20;
v18 = v17 + v22;
v2 = v24 + v15;
v4 = v26 + v18;
v16 = v24 - v15;
v19 = v18 - v26;
v21 = v7 - v30;
v23 = v11 + v28;
v8 = v7 + v30;
v12 = v11 - v28;
v25 = v2 + v4;
v27 = v2 - v4;
v29 = v8 + v21;
v31 = v12 - v23;
v5 = v21 - v8;
v9 = (float)(0.70710677 * (float)(v21 - v8)) + (float)((float)(0.70710677 * (float)(v12 + v23)) + (float)(v8 + v21));
v13 = (float)(0.70710677 * v5) + (float)((float)(v12 - v23) - (float)(0.70710677 * (float)(v12 + v23)));
a1[4] = v16;
a1[5] = v19;
*a1 = v25;
a1[1] = v27;
a1[2] = 0.5 * v9;
a1[3] = 0.5 * v13;
a1[6] = 0.5 * (float)((float)(2.0 * v29) - v9);
result = a1 + 7;
a1[7] = 0.5 * (float)(v13 - (float)(2.0 * v31));
return result;
}