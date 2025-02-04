
# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2)
{
_DWORD *result; // rax
int v3; // [rsp+1Ch] [rbp-44h]
int v4; // [rsp+20h] [rbp-40h]
int v5; // [rsp+24h] [rbp-3Ch]
int v6; // [rsp+28h] [rbp-38h]
int v7; // [rsp+2Ch] [rbp-34h]
int v8; // [rsp+30h] [rbp-30h]
int v9; // [rsp+34h] [rbp-2Ch]
int v10; // [rsp+38h] [rbp-28h]
int v11; // [rsp+48h] [rbp-18h]
int v12; // [rsp+58h] [rbp-8h]
int v13; // [rsp+5Ch] [rbp-4h]

v3 = a1[1];
v4 = a1[2];
v5 = a1[3];
v6 = a1[4];
v7 = a1[5];
v8 = a1[6];
v9 = a1[7];
v10 = *a1 + v9;
v11 = *a1 - v9;
*a2 = 91 * (v4 + v7 + v3 + v8 + v10 + v5 + v6);
a2[4] = 91 * (v10 - (v3 + v8) - (v4 + v7) + v5 + v6);
v12 = v10 - (v5 + v6);
v13 = v3 + v8 - (v4 + v7);
a2[2] = 118 * v12 + 49 * v13;
a2[6] = 49 * v12 - 118 * v13;
a2[1] = 106 * (v3 - v8) + 126 * v11 + 71 * (v4 - v7) + 25 * (v5 - v6);
a2[3] = -126 * (v4 - v7) + 106 * v11 - 25 * (v3 - v8) - 71 * (v5 - v6);
a2[5] = 25 * (v4 - v7) + -126 * (v3 - v8) + 71 * v11 + 106 * (v5 - v6);
result = a2 + 7;
a2[7] = -71 * (v3 - v8) + 25 * v11 + 106 * (v4 - v7) - 126 * (v5 - v6);
return result;
}