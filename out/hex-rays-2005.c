#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, int a2, __int64 a3)
{
__int64 result; // rax
unsigned int i; // [rsp+24h] [rbp-4h]

*a1 = 0;
for ( i = 0; ; ++i )
{
result = i;
if ( (int)i >= a2 )
break;
*a1 += *(_DWORD *)(4LL * (int)i + a3);
}
return result;
}