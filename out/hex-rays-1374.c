#include <stdio.h>

# 1 
#include "defs.h"
_DWORD * func0(__int64 a1)
{
_DWORD *result; // rax
int i; // [rsp+18h] [rbp-4h]

for ( i = 0; i <= 10; ++i )
{
result = (_DWORD *)(4LL * i + a1);
*result *= 2;
}
return result;
}