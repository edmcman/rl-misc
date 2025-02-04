#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <memory.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, float a3)
{
int i; // [rsp+1Ch] [rbp-4h]

if ( a3 <= 0.0 )
return 0LL;
if ( a3 >= 25.0 )
return (unsigned int)(a2 - 1);
for ( i = 1; i < a2; ++i )
{
if ( *(float *)(4LL * i + a1) > a3 )
return (unsigned int)(i - 1);
}
return (unsigned int)(a2 - 1);
}