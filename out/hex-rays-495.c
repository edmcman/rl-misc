#include <stdio.h>

# 1 
#include "defs.h"
_DWORD * func0(int a1, _DWORD *a2, __int64 a3)
{
_DWORD *result; // rax
int j; // [rsp+1Ch] [rbp-Ch]
int i; // [rsp+1Ch] [rbp-Ch]
int v6; // [rsp+20h] [rbp-8h]

if ( a1 )
{
for ( i = 0; i <= 5; ++i )
{
if ( a1 * (__int64)(int)a2[i] < 0 )
v6 = -128;
else
v6 = 128;
*(_DWORD *)(4LL * i + a3) = v6 + ((255LL * *(int *)(4LL * i + a3)) >> 8);
}
}
else
{
for ( j = 0; j <= 5; ++j )
*(_DWORD *)(4LL * j + a3) = (255LL * *(int *)(4LL * j + a3)) >> 8;
}
a2[5] = a2[4];
a2[4] = a2[3];
a2[3] = a2[2];
a2[2] = a2[1];
a2[1] = *a2;
result = a2;
*a2 = a1;
return result;
}