#include <stdio.h>

#include <stdint.h>

#include <time.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, unsigned int a2)
{
__int64 result; // rax
int i; // [rsp+18h] [rbp-4h]

for ( i = 0; i <= 15; ++i )
{
result = a2;
*(_DWORD *)(a1 + 4LL * i) = a2;
}
return result;
}