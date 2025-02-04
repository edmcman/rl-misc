
# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
int v6; // eax
int v7; // eax
int v8; // eax
int v9; // eax
__int64 result; // rax
int v11; // eax
int v12; // eax
int v13; // [rsp+20h] [rbp-10h]
int v14; // [rsp+20h] [rbp-10h]
int v15; // [rsp+24h] [rbp-Ch]
int v16; // [rsp+28h] [rbp-8h]
int v17; // [rsp+2Ch] [rbp-4h]
int v18; // [rsp+2Ch] [rbp-4h]

if ( a3 <= *a1 )
v6 = *a1 - a3;
else
v6 = a3 - *a1;
v13 = v6;
if ( a4 <= *a2 )
v7 = *a2 - a4;
else
v7 = a4 - *a2;
v15 = v7;
v8 = v13;
if ( v15 >= v13 )
v8 = v15;
v16 = v8 + 1;
if ( a5 >= a3 )
v9 = a5 - a3;
else
v9 = a3 - a5;
v14 = v9;
if ( a6 >= a4 )
result = (unsigned int)(a6 - a4);
else
result = (unsigned int)(a4 - a6);
if ( v14 || (_DWORD)result )
{
if ( v14 <= (int)result )
{
v18 = (v14 * v16 + ((int)result - 1) / 2) / (int)result;
if ( a5 >= a3 )
v12 = a3 + v18;
else
v12 = a3 - v18;
*a1 = v12;
if ( a6 >= a4 )
result = (unsigned int)(a4 + v16);
else
result = (unsigned int)(a4 - v16);
*a2 = result;
}
else
{
v17 = ((int)result * v16 + (v14 - 1) / 2) / v14;
if ( a6 >= a4 )
v11 = a4 + v17;
else
v11 = a4 - v17;
*a2 = v11;
if ( a5 >= a3 )
result = (unsigned int)(a3 + v16);
else
result = (unsigned int)(a3 - v16);
*a1 = result;
}
}
return result;
}