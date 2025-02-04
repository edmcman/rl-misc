#include <math.h>

#include <stdlib.h>

#include <stdio.h>

#include <inttypes.h>

# 1 
#include "defs.h"
double * func0(__int64 a1, __int64 a2, __int64 a3)
{
double *result; // rax
int i; // [rsp+20h] [rbp-8h]
int j; // [rsp+20h] [rbp-8h]
int k; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
result = (double *)(8LL * i + a3);
*result = 0.0;
}
for ( j = 0; j <= 2; ++j )
{
for ( k = 0; k <= 2; ++k )
{
result = (double *)(8LL * j + a3);
*result = *(double *)(8LL * k + a2) * *(double *)(a1 + 24LL * k + 8LL * j) + *result;
}
}
return result;
}