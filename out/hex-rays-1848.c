
# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, _DWORD *a2)
{
__int64 result; // rax
int v3; // [rsp+14h] [rbp-7Ch]
int v4; // [rsp+18h] [rbp-78h]
int v5; // [rsp+1Ch] [rbp-74h]
int v6; // [rsp+20h] [rbp-70h]
int v7; // [rsp+24h] [rbp-6Ch]
int v8; // [rsp+28h] [rbp-68h]
int v9; // [rsp+2Ch] [rbp-64h]
int v10; // [rsp+6Ch] [rbp-24h]
unsigned int v11; // [rsp+74h] [rbp-1Ch]
int v12; // [rsp+78h] [rbp-18h]
int v13; // [rsp+80h] [rbp-10h]
int v14; // [rsp+88h] [rbp-8h]

v3 = a1[1];
v4 = a1[2];
v5 = a1[3];
v6 = a1[4];
v7 = a1[5];
v8 = a1[6];
v9 = a1[7];
v10 = ((((v3 + v7) >> 1) - v7 + ((v5 + v9) >> 1) - v9) >> 1) - (((v5 + v9) >> 1) - v9);
v11 = ((*a1 + v6 + v4 + v8 + v3 + v7 + v5 + v9) >> 1) - (v3 + v7 + v5 + v9);
v12 = ((*a1 + v6 + v4 + v8) >> 1) - (v4 + v8) + ((v3 + v7 + v5 + v9) >> 1) - (v5 + v9);
v13 = ((*a1 + v6) >> 1) - v6 + ((v4 + v8) >> 1) - v8 + ((v3 + v7) >> 1) - v7 + ((v5 + v9) >> 1) - v9;
v14 = ((((*a1 + v6) >> 1) - v6 + ((v4 + v8) >> 1) - v8) >> 1) - (((v4 + v8) >> 1) - v8) + v10;
*a2 = *a1 + v6 + v4 + v8 + v3 + v7 + v5 + v9;
a2[1] = v13;
a2[2] = v14;
a2[3] = v12;
a2[4] = (v12 >> 1) - (((v3 + v7 + v5 + v9) >> 1) - (v5 + v9));
a2[5] = (v14 >> 1) - v10;
a2[6] = (v13 >> 1) - (((v3 + v7) >> 1) - v7 + ((v5 + v9) >> 1) - v9);
result = v11;
a2[7] = v11;
return result;
}