#include <assert.h>

#include <math.h>

#include <setjmp.h>

#include <stdbool.h>

#include <stdint.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int16 * func0(__int64 a1, int a2, int a3)
{
__int16 v3; // ax
__int16 *result; // rax
int i; // [rsp+1Ch] [rbp-4h]

v3 = a3 * a3;
if ( a3 * a3 > 64 )
v3 = 64;
*(_WORD *)(2LL * a2 + a1) += v3;
result = (__int16 *)*(unsigned __int16 *)(2LL * a2 + a1);
if ( (__int16)result > 2047 )
{
for ( i = 0; i <= 4095; ++i )
{
result = (__int16 *)(2LL * i + a1);
*result >>= 1;
}
}
return result;
}