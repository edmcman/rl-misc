#include <stdio.h>

#include <ctype.h>

#include <stdlib.h>

#include <stdbool.h>

# 1 
#include "defs.h"
_DWORD * func0(unsigned int *a1, __int64 a2, _DWORD *a3)
{
_DWORD *result; // rax
int v4; // eax
__int64 v5; // rdx
int v7; // [rsp+18h] [rbp-10h]
unsigned int v8; // [rsp+1Ch] [rbp-Ch]
int v9; // [rsp+20h] [rbp-8h]
int i; // [rsp+24h] [rbp-4h]

v7 = 0;
*a3 = 0;
result = (_DWORD *)*a1;
v8 = *a1;
v9 = 1;
for ( i = 1; i <= 4; ++i )
{
result = (_DWORD *)a1[i];
if ( v8 == (_DWORD)result )
{
++v9;
}
else
{
if ( v9 > 1 )
{
v4 = v7++;
*(_DWORD *)(a2 + 4LL * v4) = v9;
*a3 += v8 * v9;
}
v5 = i;
result = (_DWORD *)a1[v5];
v8 = a1[v5];
v9 = 1;
}
}
if ( v9 > 1 )
{
*(_DWORD *)(a2 + 4LL * v7) = v9;
result = a3;
*a3 += v8 * v9;
}
return result;
}