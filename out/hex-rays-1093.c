#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
char v2; // [rsp+13h] [rbp-15h]
unsigned int v3; // [rsp+14h] [rbp-14h]
int v4; // [rsp+18h] [rbp-10h]
int i; // [rsp+1Ch] [rbp-Ch]
int j; // [rsp+1Ch] [rbp-Ch]
signed int l; // [rsp+1Ch] [rbp-Ch]
unsigned int k; // [rsp+20h] [rbp-8h]
int v9; // [rsp+20h] [rbp-8h]
int v10; // [rsp+24h] [rbp-4h]

v3 = 0;
v4 = 0;
for ( i = 0; *(_BYTE *)(i + a1); ++i )
++v4;
for ( j = 0; ; j = v10 + 1 )
{
result = v3;
if ( (int)v3 >= v4 )
break;
if ( *(_BYTE *)(j + a1) == 32 )
++v3;
for ( k = v3; *(_BYTE *)((int)k + a1) != 32 && *(_BYTE *)((int)k + a1); ++k )
;
v9 = k - 1;
v10 = v9;
for ( l = v3; l <= v9; ++l )
{
v2 = *(_BYTE *)(l + a1);
*(_BYTE *)(l + a1) = *(_BYTE *)(v9 + a1);
*(_BYTE *)(a1 + v9--) = v2;
}
v3 = v10 + 1;
}
return result;
}