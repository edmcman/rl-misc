#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(int a1, int a2, int a3, __int64 a4)
{
__int64 result; // rax
int v5; // [rsp+18h] [rbp-10h]
int i; // [rsp+1Ch] [rbp-Ch]
int v7; // [rsp+20h] [rbp-8h]
int v8; // [rsp+24h] [rbp-4h]

v5 = a2 * a1;
for ( i = a2 * a3; ; ++i )
{
result = (unsigned int)(a2 * (a3 + 1));
if ( i >= (int)result )
break;
v7 = *(_DWORD *)(4LL * v5 + a4);
v8 = *(_DWORD *)(4LL * i + a4);
*(_DWORD *)(a4 + 4LL * v5) = v7;
*(_DWORD *)(a4 + 4LL * i) = v8;
*(_DWORD *)(a4 + 4LL * v5) = v8;
*(_DWORD *)(a4 + 4LL * i) = v7;
++v5;
}
return result;
}