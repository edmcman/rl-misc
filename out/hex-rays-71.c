#include <stdio.h>

# 1 
#include "defs.h"
int * func0(int *a1, _DWORD *a2, int a3, __int64 a4)
{
int *result; // rax
int v5; // [rsp+2Ch] [rbp-14h]
int i; // [rsp+30h] [rbp-10h]
int j; // [rsp+34h] [rbp-Ch]
int v8; // [rsp+38h] [rbp-8h]
int v9; // [rsp+3Ch] [rbp-4h]

v5 = 0;
v8 = 0;
v9 = 0;
for ( i = 0; i < a3; ++i )
{
v5 += *(_DWORD *)(4LL * i + a4);
for ( j = 0; j < a3; ++j )
{
if ( *(_DWORD *)(4LL * i + a4) == *(_DWORD *)(4LL * j + a4) )
++v8;
}
if ( v8 > v9 )
{
v9 = v8;
*a2 = *(_DWORD *)(4LL * i + a4);
}
v8 = 0;
}
result = a1;
*a1 = v5 / a3;
return result;
}