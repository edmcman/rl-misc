#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int a3)
{
__int64 result; // rax
int i; // [rsp+1Ch] [rbp-8h]
int j; // [rsp+20h] [rbp-4h]

for ( i = 1; ; ++i )
{
result = (unsigned int)i;
if ( i >= a3 )
break;
for ( j = i - 1; j >= 0; --j )
{
if ( *(_DWORD *)(4LL * j + a1) < *(_DWORD *)(4LL * i + a1)
&& *(_DWORD *)(4LL * j + a2) >= *(_DWORD *)(4LL * i + a2) )
{
*(_DWORD *)(4LL * i + a2) = *(_DWORD *)(4LL * j + a2) + 1;
}
}
}
return result;
}