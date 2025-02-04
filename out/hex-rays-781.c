#include <stdio.h>

#include <stdlib.h>

#include <assert.h>

#include <time.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int a3, int a4)
{
int i; // [rsp+18h] [rbp-10h]
int k; // [rsp+18h] [rbp-10h]
int j; // [rsp+1Ch] [rbp-Ch]
int v8; // [rsp+20h] [rbp-8h]

for ( i = 0; i < a3; ++i )
{
v8 = *(_DWORD *)(4LL * i + a1);
for ( j = 0; j < a4; ++j )
{
if ( *(_DWORD *)(4LL * j + a2) == v8 )
*(_DWORD *)(4LL * j + a2) = 0;
}
}
for ( k = 0; k < a4; ++k )
{
if ( *(_DWORD *)(4LL * k + a2) )
return 0LL;
}
return 1LL;
}