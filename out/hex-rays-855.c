
# 1 
#include "defs.h"
float * func0(float *a1, __int64 a2)
{
float *result; // rax
int i; // [rsp+14h] [rbp-2Ch]
int j; // [rsp+14h] [rbp-2Ch]
int k; // [rsp+14h] [rbp-2Ch]
int l; // [rsp+18h] [rbp-28h]
int m; // [rsp+18h] [rbp-28h]
int v8; // [rsp+1Ch] [rbp-24h]
int v9; // [rsp+1Ch] [rbp-24h]
float v10; // [rsp+20h] [rbp-20h]
float v11; // [rsp+20h] [rbp-20h]
float v12; // [rsp+20h] [rbp-20h]
float v13; // [rsp+20h] [rbp-20h]
float v14; // [rsp+20h] [rbp-20h]
float v15; // [rsp+20h] [rbp-20h]
float v16; // [rsp+20h] [rbp-20h]
float v17; // [rsp+20h] [rbp-20h]
float v18; // [rsp+20h] [rbp-20h]
float v19; // [rsp+20h] [rbp-20h]
float v20; // [rsp+20h] [rbp-20h]
float v21; // [rsp+24h] [rbp-1Ch]
float v22; // [rsp+24h] [rbp-1Ch]
float v23; // [rsp+24h] [rbp-1Ch]
float v24; // [rsp+24h] [rbp-1Ch]
float v25; // [rsp+24h] [rbp-1Ch]
float v26; // [rsp+24h] [rbp-1Ch]
float v27; // [rsp+24h] [rbp-1Ch]
float v28; // [rsp+24h] [rbp-1Ch]
float v29; // [rsp+24h] [rbp-1Ch]
float v30; // [rsp+28h] [rbp-18h]
float v31; // [rsp+28h] [rbp-18h]
float v32; // [rsp+2Ch] [rbp-14h]
float v33; // [rsp+2Ch] [rbp-14h]
float v34; // [rsp+30h] [rbp-10h]
float v35; // [rsp+30h] [rbp-10h]
float v36; // [rsp+30h] [rbp-10h]
float v37; // [rsp+30h] [rbp-10h]
float v38; // [rsp+34h] [rbp-Ch]
float v39; // [rsp+34h] [rbp-Ch]
float v40; // [rsp+34h] [rbp-Ch]
float v41; // [rsp+34h] [rbp-Ch]

for ( i = 0; i <= 31; i += 4 )
{
v10 = a1[i];
v21 = a1[i + 1];
v34 = a1[i + 2];
v38 = a1[i + 3];
a1[i] = (float)(v10 + v21) + (float)(v34 + v38);
a1[i + 2] = (float)(v10 + v21) - (float)(v34 + v38);
a1[i + 1] = (float)(v10 - v21) + (float)(v34 - v38);
a1[i + 3] = (float)(v10 - v21) - (float)(v34 - v38);
}
for ( j = 0; j <= 31; j += 8 )
{
v11 = a1[j];
v22 = a1[j + 4];
a1[j] = v11 + v22;
a1[j + 4] = v11 - v22;
v12 = a1[j + 2];
v23 = a1[j + 6];
a1[j + 2] = v12 + v23;
a1[j + 6] = v12 - v23;
v13 = a1[j + 1];
v35 = 0.70710677 * (float)(a1[j + 5] + a1[j + 7]);
v39 = 0.70710677 * (float)(a1[j + 5] - a1[j + 7]);
a1[j + 1] = v13 + v35;
a1[j + 5] = v13 - v35;
v14 = a1[j + 3];
a1[j + 3] = v14 + v39;
a1[j + 7] = v14 - v39;
}
for ( k = 0; k <= 31; k += 16 )
{
v8 = 2;
v15 = a1[k];
v24 = a1[k + 8];
a1[k] = v15 + v24;
a1[k + 8] = v15 - v24;
v16 = a1[k + 4];
v25 = a1[k + 12];
a1[k + 4] = v16 + v25;
a1[k + 12] = v16 - v25;
for ( l = 1; l <= 3; ++l )
{
v30 = *(float *)(4LL * v8 + a2);
v32 = *(float *)(4 * (v8 + 8LL) + a2);
v17 = a1[k + l];
v26 = a1[k - l + 8];
v36 = (float)(a1[k - l + 16] * v30) + (float)(a1[k + 8 + l] * v32);
v40 = (float)(a1[k + 8 + l] * v30) - (float)(a1[k - l + 16] * v32);
v8 += 2;
a1[k + l] = v17 + v36;
a1[k + 8 + l] = v17 - v36;
a1[k - l + 8] = v26 + v40;
a1[k - l + 16] = v26 - v40;
}
}
v9 = 1;
v18 = *a1;
v27 = a1[16];
*a1 = *a1 + v27;
a1[16] = v18 - v27;
v19 = a1[8];
v28 = a1[24];
a1[8] = v19 + v28;
result = a1 + 24;
a1[24] = v19 - v28;
for ( m = 1; m <= 7; ++m )
{
v31 = *(float *)(4LL * v9 + a2);
v33 = *(float *)(4 * (v9 + 8LL) + a2);
v20 = a1[m];
v29 = a1[-m + 16];
v37 = (float)(a1[-m + 32] * v31) + (float)(a1[m + 16] * v33);
v41 = (float)(a1[m + 16] * v31) - (float)(a1[-m + 32] * v33);
++v9;
a1[m] = v20 + v37;
a1[m + 16] = v20 - v37;
a1[-m + 16] = v29 + v41;
result = &a1[-m + 32];
*result = v29 - v41;
}
return result;
}