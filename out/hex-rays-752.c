
# 1 
#include "defs.h"
float * func0(float *a1, __int64 a2)
{
float *result; // rax
int i; // [rsp+14h] [rbp-2Ch]
int j; // [rsp+14h] [rbp-2Ch]
int k; // [rsp+18h] [rbp-28h]
int v6; // [rsp+1Ch] [rbp-24h]
float v7; // [rsp+20h] [rbp-20h]
float v8; // [rsp+20h] [rbp-20h]
float v9; // [rsp+20h] [rbp-20h]
float v10; // [rsp+20h] [rbp-20h]
float v11; // [rsp+20h] [rbp-20h]
float v12; // [rsp+20h] [rbp-20h]
float v13; // [rsp+20h] [rbp-20h]
float v14; // [rsp+20h] [rbp-20h]
float v15; // [rsp+24h] [rbp-1Ch]
float v16; // [rsp+24h] [rbp-1Ch]
float v17; // [rsp+24h] [rbp-1Ch]
float v18; // [rsp+24h] [rbp-1Ch]
float v19; // [rsp+24h] [rbp-1Ch]
float v20; // [rsp+24h] [rbp-1Ch]
float v21; // [rsp+28h] [rbp-18h]
float v22; // [rsp+2Ch] [rbp-14h]
float v23; // [rsp+30h] [rbp-10h]
float v24; // [rsp+30h] [rbp-10h]
float v25; // [rsp+30h] [rbp-10h]
float v26; // [rsp+34h] [rbp-Ch]
float v27; // [rsp+34h] [rbp-Ch]
float v28; // [rsp+34h] [rbp-Ch]

for ( i = 0; i <= 15; i += 4 )
{
v7 = a1[i];
v15 = a1[i + 1];
v23 = a1[i + 2];
v26 = a1[i + 3];
a1[i] = (float)(v7 + v15) + (float)(v23 + v26);
a1[i + 2] = (float)(v7 + v15) - (float)(v23 + v26);
a1[i + 1] = (float)(v7 - v15) + (float)(v23 - v26);
a1[i + 3] = (float)(v7 - v15) - (float)(v23 - v26);
}
for ( j = 0; j <= 15; j += 8 )
{
v8 = a1[j];
v16 = a1[j + 4];
a1[j] = v8 + v16;
a1[j + 4] = v8 - v16;
v9 = a1[j + 2];
v17 = a1[j + 6];
a1[j + 2] = v9 + v17;
a1[j + 6] = v9 - v17;
v10 = a1[j + 1];
v24 = 0.70710677 * (float)(a1[j + 5] + a1[j + 7]);
v27 = 0.70710677 * (float)(a1[j + 5] - a1[j + 7]);
a1[j + 1] = v10 + v24;
a1[j + 5] = v10 - v24;
v11 = a1[j + 3];
a1[j + 3] = v11 + v27;
a1[j + 7] = v11 - v27;
}
v6 = 1;
v12 = *a1;
v18 = a1[8];
*a1 = *a1 + v18;
a1[8] = v12 - v18;
v13 = a1[4];
v19 = a1[12];
a1[4] = v13 + v19;
result = a1 + 12;
a1[12] = v13 - v19;
for ( k = 1; k <= 3; ++k )
{
v21 = *(float *)(4LL * v6 + a2);
v22 = *(float *)(4 * (v6 + 4LL) + a2);
v14 = a1[k];
v20 = a1[-k + 8];
v25 = (float)(a1[-k + 16] * v21) + (float)(a1[k + 8] * v22);
v28 = (float)(a1[k + 8] * v21) - (float)(a1[-k + 16] * v22);
++v6;
a1[k] = v14 + v25;
a1[k + 8] = v14 - v25;
a1[-k + 8] = v20 + v28;
result = &a1[-k + 16];
*result = v20 - v28;
}
return result;
}