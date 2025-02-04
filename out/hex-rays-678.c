#include <math.h>

#include <float.h>

#include <stdbool.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

#include <stdio.h>

# 1 
#include "defs.h"
float  func0(__int64 a1, __int64 a2, float a3, float a4)
{
float result; // xmm0_4
int i; // [rsp+24h] [rbp-4h]

for ( i = 0; ; ++i )
{
result = a3;
if ( a3 < (float)i )
break;
if ( *(float *)(4LL * i + a1) > *(float *)(4LL * i + a2) )
*(float *)(4LL * i + a1) = (float)(*(float *)(4LL * i + a1) * (float)(1.0 - a4))
+ (float)(*(float *)(4LL * i + a2) * a4);
}
return result;
}