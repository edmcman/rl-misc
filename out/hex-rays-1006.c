
# 1 
#include "defs.h"
unsigned __int64  func0(_WORD *a1, __int64 a2)
{
int i; // [rsp+1Ch] [rbp-64h]
int j; // [rsp+1Ch] [rbp-64h]
int k; // [rsp+1Ch] [rbp-64h]
__int16 v6; // [rsp+20h] [rbp-60h]
int v7; // [rsp+20h] [rbp-60h]
__int16 v8; // [rsp+24h] [rbp-5Ch]
int v9; // [rsp+24h] [rbp-5Ch]
__int16 v10; // [rsp+28h] [rbp-58h]
int v11; // [rsp+28h] [rbp-58h]
__int16 v12; // [rsp+2Ch] [rbp-54h]
int v13; // [rsp+2Ch] [rbp-54h]
__int16 *v15; // [rsp+40h] [rbp-40h]
__int16 *v16; // [rsp+48h] [rbp-38h]
__int16 *v17; // [rsp+48h] [rbp-38h]
__int16 v18[20]; // [rsp+50h] [rbp-30h] BYREF
unsigned __int64 v19; // [rsp+78h] [rbp-8h]

v19 = __readfsqword(0x28u);
v16 = v18;
for ( i = 0; i <= 3; ++i )
{
v6 = *a1 + a1[12];
v8 = a1[4] + a1[8];
v10 = a1[4] - a1[8];
v12 = *a1 - a1[12];
*v16 = v6 + v8;
v16[4] = v12 + v10;
v16[8] = v6 - v8;
v16[12] = v12 - v10;
++a1;
++v16;
}
v15 = v18;
v17 = v18;
for ( j = 0; j <= 3; ++j )
{
v7 = *v15 + v15[3];
v9 = v15[1] + v15[2];
v11 = v15[1] - v15[2];
v13 = *v15 - v15[3];
*v17 = (v7 + v9 + 3) >> 3;
v17[1] = (v11 + v13 + 3) >> 3;
v17[2] = (v7 - v9 + 3) >> 3;
v17[3] = (v13 - v11 + 3) >> 3;
v15 += 4;
v17 += 4;
}
for ( k = 0; k <= 15; ++k )
*(_WORD *)(a2 + 32LL * k) = v18[k];
return __readfsqword(0x28u) ^ v19;
}