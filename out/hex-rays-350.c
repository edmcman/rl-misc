#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 24; ++i )
{
result = (unsigned int)((*(_DWORD *)(4LL * i + a2) + *(_DWORD *)(4LL * i + a1)) % 2);
*(_DWORD *)(a1 + 4LL * i) = result;
}
return result;
}