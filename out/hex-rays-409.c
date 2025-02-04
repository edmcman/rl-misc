#include <stdint.h>

#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
float * func0(float *a1, float a2)
{
float *result; // rax
float v3; // [rsp+1Ch] [rbp-30h]
float v4; // [rsp+1Ch] [rbp-30h]
float v5; // [rsp+20h] [rbp-2Ch]
float v6; // [rsp+20h] [rbp-2Ch]
float v7; // [rsp+24h] [rbp-28h]
float v8; // [rsp+24h] [rbp-28h]
float v9; // [rsp+24h] [rbp-28h]
float v10; // [rsp+28h] [rbp-24h]
float v11; // [rsp+28h] [rbp-24h]
float v12; // [rsp+28h] [rbp-24h]
float v13; // [rsp+2Ch] [rbp-20h]
float v14; // [rsp+2Ch] [rbp-20h]
float v15; // [rsp+30h] [rbp-1Ch]
float v16; // [rsp+30h] [rbp-1Ch]
float v17; // [rsp+34h] [rbp-18h]
float v18; // [rsp+34h] [rbp-18h]
float v19; // [rsp+38h] [rbp-14h]
float v20; // [rsp+38h] [rbp-14h]
float v21; // [rsp+3Ch] [rbp-10h]
float v22; // [rsp+40h] [rbp-Ch]
float v23; // [rsp+44h] [rbp-8h]
float v24; // [rsp+44h] [rbp-8h]
float v25; // [rsp+48h] [rbp-4h]
float v26; // [rsp+48h] [rbp-4h]

v5 = a1[1];
v7 = a1[2];
v10 = a1[3];
v13 = a1[4] * 2.0;
v15 = a1[5] * 2.0;
v17 = a1[6];
v19 = a1[7];
v21 = *a1 + v5;
v22 = *a1 - v5;
v23 = v7 + v17;
v25 = v10 - v19;
v3 = v7 - v17;
v8 = (float)((float)(v7 + v17) - (float)(0.70710677 * (float)(v7 - v17))) - (float)(0.70710677 * (float)(v10 + v19));
v11 = (float)((float)(0.70710677 * v3) + (float)(v10 - v19)) - (float)(0.70710677 * (float)(v10 + v19));
v18 = (float)(2.0 * v23) - v8;
v20 = v11 - (float)(2.0 * v25);
v4 = v21 + v13;
v6 = v22 - v15;
v14 = v21 - v13;
v16 = v15 + v22;
v24 = v8 - v18;
v26 = v11 - v20;
v9 = v8 + v18;
v12 = v11 + v20;
*a1 = a2 * (float)(v4 + v9);
a1[1] = a2 * (float)(v6 + v12);
a1[2] = a2 * (float)(v14 - v26);
a1[3] = a2 * (float)(v16 + v24);
a1[4] = a2 * (float)(v4 - v9);
a1[5] = a2 * (float)(v6 - v12);
a1[6] = a2 * (float)(v14 + v26);
result = a1 + 7;
a1[7] = a2 * (float)(v16 - v24);
return result;
}