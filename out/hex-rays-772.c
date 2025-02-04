#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <limits.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int a3)
{
int i; // [rsp+18h] [rbp-Ch]
int v5; // [rsp+18h] [rbp-Ch]
int v6; // [rsp+1Ch] [rbp-8h]
int v7; // [rsp+20h] [rbp-4h]

for ( i = 0; i <= 3; ++i )
*(_DWORD *)(4LL * i + a1) = -1;
v5 = 4;
v6 = -1;
v7 = 0;
while ( v7 <= 3 )
{
if ( ++v6 < a3 )
{
if ( *(_BYTE *)(v6 + a2) != 32 )
{
*(_DWORD *)(4LL * v5++ + a1) = *(char *)(v6 + a2);
++v7;
}
}
else
{
v6 = a3;
*(_DWORD *)(4LL * v5++ + a1) = -1;
++v7;
}
}
return (unsigned int)v6;
}