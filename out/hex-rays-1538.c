#include <float.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(int a1, __int64 a2, __int64 a3, double a4)
{
__int64 result; // rax
unsigned int i; // [rsp+2Ch] [rbp-4h]

for ( i = 0; ; ++i )
{
result = i;
if ( (int)i >= a1 )
break;
*(double *)(8LL * (int)i + a3) = *(double *)(8LL * (int)i + a2) * a4 + *(double *)(8LL * (int)i + a3);
}
return result;
}