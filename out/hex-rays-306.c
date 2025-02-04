#include <math.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, float a3)
{
__int64 i; // [rsp+20h] [rbp-8h]

for ( i = 0LL; i < a2; ++i )
{
if ( *(float *)(4 * i + a1) > a3 )
*(float *)(4 * i + a1) = a3;
}
return 0LL;
}