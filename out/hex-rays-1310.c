#include <stdio.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, unsigned int a2, int a3)
{
unsigned __int64 result; // rax
int v4; // [rsp+0h] [rbp-30h]
int v5; // [rsp+18h] [rbp-18h]
_QWORD *v6; // [rsp+20h] [rbp-10h]
__int64 i; // [rsp+28h] [rbp-8h]

v4 = a3;
v6 = (_QWORD *)(8LL * (a2 >> 5) + a1);
v5 = 32 - (a2 & 0x1F);
for ( i = -1LL << (a2 & 0x1F); ; i = -1LL )
{
result = (unsigned int)(v4 - v5);
if ( (result & 0x80000000) != 0LL )
break;
*v6 |= i;
v4 -= v5;
v5 = 32;
++v6;
}
if ( v4 )
{
result = (unsigned __int64)v6;
*v6 |= (0xFFFFFFFFFFFFFFFFLL >> (-(char)(a3 + a2) & 0x1F)) & i;
}
return result;
}