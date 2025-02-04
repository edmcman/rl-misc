#include <stdio.h>

#include <stdint.h>

#include <time.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int64 a3)
{
__int64 result; // rax
int i; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 15; ++i )
{
result = (unsigned int)(*(_DWORD *)(4LL * i + a1) * *(_DWORD *)(4LL * i + a2));
*(_DWORD *)(4LL * i + a3) = result;
}
return result;
}