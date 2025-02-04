






# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1)
{
_QWORD *result; // rax
__int64 v2; // [rsp+8h] [rbp-70h]
__int64 v3; // [rsp+10h] [rbp-68h]
__int64 v4; // [rsp+18h] [rbp-60h]
__int64 v5; // [rsp+20h] [rbp-58h]
__int64 v6; // [rsp+28h] [rbp-50h]
__int64 v7; // [rsp+30h] [rbp-48h]
__int64 v8; // [rsp+38h] [rbp-40h]
__int64 v9; // [rsp+40h] [rbp-38h]
__int64 v10; // [rsp+48h] [rbp-30h]
__int64 v11; // [rsp+50h] [rbp-28h]
__int64 v12; // [rsp+58h] [rbp-20h]
__int64 v13; // [rsp+60h] [rbp-18h]
__int64 v14; // [rsp+70h] [rbp-8h]

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