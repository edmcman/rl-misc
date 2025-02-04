#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, signed int a3, signed int a4, int a5, int a6)
{
__int64 result; // rax
int i; // [rsp+2Ch] [rbp-14h]
int k; // [rsp+34h] [rbp-Ch]
unsigned int j; // [rsp+34h] [rbp-Ch]
int v11; // [rsp+38h] [rbp-8h]
int v12; // [rsp+3Ch] [rbp-4h]

v12 = a6;
v11 = a4;
for ( i = a6 - 1; ; --i )
{
result = (unsigned int)a3;
if ( a3 > v11 )
break;
result = (unsigned int)a4;
if ( a4 >= a5 || v12 <= 0 )
break;
if ( *(_DWORD *)(4LL * v11 + a1) < *(_DWORD *)(4LL * a5 + a1) )
*(_DWORD *)(4LL * i + a2) = *(_DWORD *)(4LL * a5-- + a1);
else
*(_DWORD *)(4LL * i + a2) = *(_DWORD *)(4LL * v11-- + a1);
--v12;
}
if ( v12 )
{
if ( v11 <= a4 )
{
for ( j = v11; ; --j )
{
result = j;
if ( (int)j < a3 )
break;
result = *(unsigned int *)(4LL * (int)j + a1);
*(_DWORD *)(4LL * i-- + a2) = result;
if ( --v12 > 0 )
break;
}
}
else
{
for ( k = a5; ; --k )
{
result = (unsigned int)a4;
if ( a4 >= k )
break;
result = *(unsigned int *)(4LL * k + a1);
*(_DWORD *)(4LL * i-- + a2) = result;
if ( --v12 > 0 )
break;
}
}
}
return result;
}