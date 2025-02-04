#include <inttypes.h>

#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <tgmath.h>

#include <math.h>

#include <assert.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int a3, float a4)
{
__int64 result; // rax
unsigned int i; // [rsp+24h] [rbp-4h]

for ( i = 0; ; ++i )
{
result = i;
if ( (int)i >= a3 )
break;
*(float *)(4LL * (int)i + a2) = (float)(*(float *)(4LL * (int)i + a1) * a4)
+ (float)(*(float *)(4LL * (int)i + a2) * 0.99989998);
}
return result;
}