







# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1)
{
_DWORD *result; // rax
int v2; // [rsp+10h] [rbp-38h]
int v3; // [rsp+14h] [rbp-34h]
int v4; // [rsp+18h] [rbp-30h]
int v5; // [rsp+1Ch] [rbp-2Ch]
int v6; // [rsp+20h] [rbp-28h]
int v7; // [rsp+24h] [rbp-24h]
int v8; // [rsp+28h] [rbp-20h]
int v9; // [rsp+2Ch] [rbp-1Ch]
int v10; // [rsp+30h] [rbp-18h]
int v11; // [rsp+34h] [rbp-14h]
int v12; // [rsp+38h] [rbp-10h]
int v13; // [rsp+3Ch] [rbp-Ch]
int v14; // [rsp+44h] [rbp-4h]

v2 = a1[2];
v3 = a1[3];
v4 = a1[4];
v5 = a1[5];
v6 = a1[6];
v7 = a1[7];
v8 = a1[8];
v9 = a1[9];
v10 = a1[10];
v11 = a1[11];
v12 = a1[12];
v13 = a1[13];
v14 = a1[15];
a1[2] = a1[14];
a1[3] = v14;
a1[4] = v6;
a1[5] = v7;
a1[6] = v10;
a1[7] = v11;
a1[8] = v2;
a1[9] = v3;
a1[10] = v12;
a1[11] = v13;
a1[12] = v4;
a1[13] = v5;
a1[14] = v8;
result = a1 + 15;
a1[15] = v9;
return result;
}