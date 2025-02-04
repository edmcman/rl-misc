#include <errno.h>

#include <inttypes.h>

#include <limits.h>

#include <setjmp.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, __int64 a2)
{
int v2; // eax
__int16 v3; // cx
int v5; // [rsp+14h] [rbp-DCh]
int i; // [rsp+14h] [rbp-DCh]
int v7; // [rsp+18h] [rbp-D8h]
int j; // [rsp+1Ch] [rbp-D4h]
int v9[50]; // [rsp+20h] [rbp-D0h]
unsigned __int64 v10; // [rsp+E8h] [rbp-8h]

v10 = __readfsqword(0x28u);
v5 = 0;
v9[0] = -1;
v7 = -1;
while ( v5 <= 46 )
{
while ( v7 >= 0 && *(_BYTE *)(v5 + a2) != *(_BYTE *)(v7 + a2) )
v7 = v9[v7];
if ( *(_BYTE *)(++v5 + a2) == *(_BYTE *)(++v7 + a2) )
v2 = v9[v7];
else
v2 = v7;
v9[v5] = v2;
}
for ( i = 0; i <= 47; ++i )
{
for ( j = 0; j <= 1; ++j )
{
if ( j == *(char *)(i + a2) )
v3 = i + 1;
else
v3 = v9[i] + 1;
*(_WORD *)(a1 + 4LL * i + 2LL * j) = v3;
}
}
return __readfsqword(0x28u) ^ v10;
}