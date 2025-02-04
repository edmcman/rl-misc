#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(int a1, int a2, int a3, int a4, _DWORD *a5, int *a6, _DWORD *a7)
{
__int64 result; // rax
int v8; // [rsp+20h] [rbp-10h]
int i; // [rsp+24h] [rbp-Ch]
int v10; // [rsp+28h] [rbp-8h]
int v11; // [rsp+2Ch] [rbp-4h]

++*a7;
v8 = a2 + 1;
v10 = a3 / a4 - 1;
if ( a1 == a2 + 1 )
{
*a5 = a2;
*a6 = v10;
result = 1LL;
}
else
{
for ( i = 1; i <= a4; ++i )
{
v11 = v8 + a3 / a4;
if ( a1 == v11 )
{
*a5 = a2;
*a6 = v10;
return 1LL;
}
if ( a1 > v8 && a1 < v11 )
return func0(a1, v8, v10, a4, (_DWORD)a5, (_DWORD)a6, (__int64)a7);
v8 += a3 / a4;
}
*a5 = -1;
*a6 = -1;
result = 0LL;
}
return result;
}