#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, int a2, int a3, int *a4, int *a5)
{
float v5; // xmm0_4
unsigned __int64 result; // rax
int v7; // [rsp+20h] [rbp-10h]
int v8; // [rsp+20h] [rbp-10h]
int i; // [rsp+24h] [rbp-Ch]
int j; // [rsp+28h] [rbp-8h]
int v11; // [rsp+2Ch] [rbp-4h]

v5 = (float)a3 * (float)((float)a2 * 0.050000001);
result = (unsigned int)(int)v5;
v11 = (int)v5;
v7 = 0;
for ( i = 0; i <= 255; ++i )
{
v7 += *(_DWORD *)(4LL * i + a1);
result = (unsigned int)v7;
if ( v7 > v11 )
{
result = (unsigned __int64)a4;
*a4 = i;
break;
}
}
v8 = 0;
for ( j = 255; j >= 0; --j )
{
v8 += *(_DWORD *)(4LL * j + a1);
result = (unsigned int)v8;
if ( v8 > v11 )
{
result = (unsigned __int64)a5;
*a5 = j;
return result;
}
}
return result;
}