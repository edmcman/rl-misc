
# 1 
#include "defs.h"
unsigned __int64  func0(_QWORD *a1, unsigned __int64 *a2)
{
unsigned __int128 v2; // kr00_16
unsigned __int128 v3; // kr10_16
unsigned __int64 v4; // rax
unsigned __int128 v5; // kr20_16
__int64 v6; // rdx
unsigned __int128 v7; // kr30_16
unsigned __int128 v8; // kr40_16
__int64 v9; // rdx
unsigned __int128 v10; // kr50_16
__int64 v11; // rdx
__int64 v12; // rax
unsigned __int128 v13; // kr60_16
unsigned __int128 v14; // kr80_16
unsigned __int64 result; // rax
_BYTE v17[24]; // [rsp+18h] [rbp-28h]
unsigned __int128 v18; // [rsp+30h] [rbp-10h]
unsigned __int128 v19; // [rsp+30h] [rbp-10h]
unsigned __int128 v20; // [rsp+30h] [rbp-10h]
unsigned __int128 v21; // [rsp+30h] [rbp-10h]
unsigned __int128 v22; // [rsp+30h] [rbp-10h]
unsigned __int128 v23; // [rsp+30h] [rbp-10h]
unsigned __int128 v24; // [rsp+30h] [rbp-10h]
unsigned __int128 v25; // [rsp+30h] [rbp-10h]
unsigned __int128 v26; // [rsp+30h] [rbp-10h]
unsigned __int128 v27; // [rsp+30h] [rbp-10h]
unsigned __int128 v28; // [rsp+30h] [rbp-10h]
unsigned __int128 v29; // [rsp+30h] [rbp-10h]
unsigned __int128 v30; // [rsp+30h] [rbp-10h]
unsigned __int128 v31; // [rsp+30h] [rbp-10h]
unsigned __int128 v32; // [rsp+30h] [rbp-10h]
unsigned __int128 v33; // [rsp+30h] [rbp-10h]

v18 = *a2 * (unsigned __int128)*a2;
*(_OWORD *)&v17[8] = ((v18 + 0) >> 64) + 0;
*a1 = v18;
v19 = *a2 * (unsigned __int128)a2[1];
v2 = 2 * (unsigned __int128)*((unsigned __int64 *)&v19 + 1);
*((_QWORD *)&v19 + 1) *= 2LL;
v20 = v19 + (unsigned __int64)v19;
v3 = v20 + *(unsigned __int64 *)&v17[8];
v4 = __CFADD__(*((_QWORD *)&v3 + 1), *(_QWORD *)&v17[16]) + *((_QWORD *)&v2 + 1);
*(_QWORD *)&v17[16] += *((_QWORD *)&v3 + 1);
a1[1] = v20 + *(_QWORD *)&v17[8];
v21 = a2[1] * (unsigned __int128)a2[1];
v5 = v21 + *(unsigned __int64 *)&v17[16];
*(_QWORD *)&v17[16] += v21;
*(_OWORD *)v17 = *((unsigned __int64 *)&v5 + 1) + (unsigned __int128)v4;
v22 = *a2 * (unsigned __int128)a2[2];
v6 = *((_QWORD *)&v22 + 1);
*((_QWORD *)&v22 + 1) *= 2LL;
*(_QWORD *)&v17[8] += __CFADD__(v6, v6);
v23 = v22 + (unsigned __int64)v22;
*(_OWORD *)v17 += (v23 + *(unsigned __int64 *)&v17[16]) >> 64;
a1[2] = v23 + *(_QWORD *)&v17[16];
v24 = *a2 * (unsigned __int128)a2[3];
v7 = 2 * (unsigned __int128)*((unsigned __int64 *)&v24 + 1);
*((_QWORD *)&v24 + 1) *= 2LL;
*(_QWORD *)&v17[16] = *((_QWORD *)&v7 + 1);
v25 = v24 + (unsigned __int64)v24;
v8 = v25 + *(unsigned __int64 *)v17;
*(_QWORD *)v17 += v25;
*(_OWORD *)&v17[8] += *((unsigned __int64 *)&v8 + 1);
v26 = a2[1] * (unsigned __int128)a2[2];
v9 = *((_QWORD *)&v26 + 1);
*((_QWORD *)&v26 + 1) *= 2LL;
*(_QWORD *)&v17[16] += __CFADD__(v9, v9);
v27 = v26 + (unsigned __int64)v26;
*(_OWORD *)&v17[8] += (v27 + *(unsigned __int64 *)v17) >> 64;
a1[3] = v27 + *(_QWORD *)v17;
v28 = a2[2] * (unsigned __int128)a2[2];
v10 = v28 + *(unsigned __int64 *)&v17[8];
*(_QWORD *)&v17[8] += v28;
v29 = a2[1] * (unsigned __int128)a2[3];
v11 = *((_QWORD *)&v29 + 1);
*((_QWORD *)&v29 + 1) *= 2LL;
v30 = v29 + (unsigned __int64)v29;
v13 = __PAIR128__(__CFADD__(v11, v11), (v30 + *(unsigned __int64 *)&v17[8]) >> 64)
+ *((unsigned __int64 *)&v10 + 1)
+ (unsigned __int128)*(unsigned __int64 *)&v17[16];
v12 = v13 >> 64;
*(_QWORD *)&v17[16] = v13;
*(_QWORD *)v17 = v12;
a1[4] = v30 + *(_QWORD *)&v17[8];
v31 = a2[2] * (unsigned __int128)a2[3];
v14 = 2 * (unsigned __int128)*((unsigned __int64 *)&v31 + 1);
*((_QWORD *)&v31 + 1) *= 2LL;
*(_QWORD *)&v17[8] = *((_QWORD *)&v14 + 1);
v32 = v31 + (unsigned __int64)v31;
*(_OWORD *)v17 += (v32 + *(unsigned __int64 *)&v17[16]) >> 64;
a1[5] = v32 + *(_QWORD *)&v17[16];
v33 = a2[3] * (unsigned __int128)a2[3];
a1[6] = v33 + *(_QWORD *)v17;
result = ((v33 + *(unsigned __int64 *)v17) >> 64) + *(_QWORD *)&v17[8];
a1[7] = result;
return result;
}