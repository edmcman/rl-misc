#include <stdio.h>

#include <stdlib.h>

#include <sys/time.h>

#include <time.h>

#include <math.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int a3, double a4)
{
__int64 result; // rax
unsigned int i; // [rsp+2Ch] [rbp-4h]

for ( i = 0; ; ++i )
{
result = i;
if ( (int)i >= a3 )
break;
*(double *)(8LL * (int)i + a2) = *(double *)(8LL * (int)i + a1) * a4 + *(double *)(8LL * (int)i + a2);
}
return result;
}