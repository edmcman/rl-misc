#include <stdio.h>

#include <stdlib.h>

#include <omp.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int a3, int a4)
{
__int64 result; // rax
int i; // [rsp+24h] [rbp-4h]

for ( i = 1; ; ++i )
{
result = (unsigned int)i;
if ( i > a3 )
break;
*(double *)(8LL * i + a2) = *(double *)(8LL * i + a2) + (double)a4 * *(double *)(8LL * i + a1);
}
return result;
}