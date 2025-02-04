#include <errno.h>

#include <ctype.h>

#include <stdio.h>

#include <stdint.h>

#include <stdlib.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, int a2, int a3)
{
unsigned __int64 result; // rax
__int64 v4; // rax
__int64 v5; // rdx
int v6; // [rsp+0h] [rbp-30h]
int v7; // [rsp+18h] [rbp-18h]
int v8; // [rsp+1Ch] [rbp-14h]
__int64 *v9; // [rsp+20h] [rbp-10h]
__int64 i; // [rsp+28h] [rbp-8h]

v6 = a3;
v9 = (__int64 *)(8LL * (a2 / 64) + a1);
v8 = a2 + a3;
v7 = 64 - a2 % 64;
for ( i = -1LL << (a2 % 64); ; i = -1LL )
{
result = (unsigned int)(v6 - v7);
if ( (result & 0x80000000) != 0LL )
break;
*v9 &= ~i;
v6 -= v7;
v7 = 64;
++v9;
}
if ( v6 )
{
if ( (v8 & 0x3F) != 0 )
v4 = (1LL << (v8 % 64)) - 1;
else
v4 = -1LL;
v5 = *v9 & ~(v4 & i);
result = (unsigned __int64)v9;
*v9 = v5;
}
return result;
}