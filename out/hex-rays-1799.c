#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <sys/time.h>

#include <stdint.h>

#include <emmintrin.h>

# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, __int64 a2, __int64 a3)
{
_DWORD *result; // rax
int i; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 15; ++i )
{
*(float *)(4LL * i + a1) = (float)(i + 1);
*(float *)(4LL * i + a2) = (float)(i + 1);
result = (_DWORD *)(4LL * i + a3);
*result = 0;
}
return result;
}