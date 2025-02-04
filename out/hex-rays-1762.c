#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
int v1; // eax
int v3; // [rsp+8h] [rbp-10h]
int v4; // [rsp+Ch] [rbp-Ch]
int i; // [rsp+10h] [rbp-8h]
int v6; // [rsp+14h] [rbp-4h]

v3 = 0;
do
v1 = v3++;
while ( *(_DWORD *)(4LL * v1 + a1) );
v4 = 1;
while ( v4 )
{
v4 = 0;
for ( i = 0; i < v3 - 2; ++i )
{
if ( *(_DWORD *)(4LL * i + a1) > *(_DWORD *)(4 * (i + 1LL) + a1) )
{
v6 = *(_DWORD *)(4LL * i + a1);
*(_DWORD *)(4LL * i + a1) = *(_DWORD *)(4 * (i + 1LL) + a1);
*(_DWORD *)(a1 + 4 * (i + 1LL)) = v6;
v4 = 1;
}
}
}
return a1;
}