#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int a3)
{
__int64 result; // rax
int i; // [rsp+1Ch] [rbp-8h]
int v5; // [rsp+20h] [rbp-4h]

for ( i = 1; ; ++i )
{
result = (unsigned int)(a3 - 1);
if ( i >= (int)result )
break;
v5 = *(_DWORD *)(4LL * i - 4 + a1) == 1;
if ( *(_DWORD *)(4 * (i + 1LL) + a1) == 1 )
++v5;
if ( v5 == 1 )
*(_DWORD *)(4LL * i + a2) = 1;
}
return result;
}