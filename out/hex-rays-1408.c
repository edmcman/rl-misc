#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <limits.h>

#include <time.h>

# 1 
#include "defs.h"
__int64  func0(double *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
__int64 result; // rax
int i; // [rsp+2Ch] [rbp-4h]

*a1 = 0.0;
for ( i = 0; ; ++i )
{
result = i;
if ( a4 <= i )
break;
*a1 = *(double *)(8LL * i + a3) * *(double *)(8LL * i + a2) + *a1;
}
return result;
}