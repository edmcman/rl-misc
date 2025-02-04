#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
unsigned __int64  func0(_DWORD *a1)
{
int v2; // [rsp+18h] [rbp-48h]
int v3; // [rsp+1Ch] [rbp-44h]
int v4; // [rsp+20h] [rbp-40h]
int v5; // [rsp+28h] [rbp-38h]
int v6; // [rsp+2Ch] [rbp-34h]
int v7; // [rsp+30h] [rbp-30h]
int v8; // [rsp+34h] [rbp-2Ch]
int v9; // [rsp+3Ch] [rbp-24h]
int v10; // [rsp+40h] [rbp-20h]
int v11; // [rsp+44h] [rbp-1Ch]
int v12; // [rsp+48h] [rbp-18h]
unsigned __int64 v13; // [rsp+58h] [rbp-8h]

v13 = __readfsqword(0x28u);
v2 = a1[8];
v3 = a1[12];
v4 = a1[1];
v5 = a1[9];
v6 = a1[13];
v7 = a1[2];
v8 = a1[6];
v9 = a1[14];
v10 = a1[3];
v11 = a1[7];
v12 = a1[11];
a1[1] = a1[4];
a1[2] = v2;
a1[3] = v3;
a1[4] = v4;
a1[6] = v5;
a1[7] = v6;
a1[8] = v7;
a1[9] = v8;
a1[11] = v9;
a1[12] = v10;
a1[13] = v11;
a1[14] = v12;
return __readfsqword(0x28u) ^ v13;
}