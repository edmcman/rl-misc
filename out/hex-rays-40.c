#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
#include "defs.h"
double * func0(__int64 a1, __int64 a2, __int64 a3)
{
double *result; // rax
int i; // [rsp+20h] [rbp-8h]
int j; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
result = (double *)(8LL * i + a3);
*result = 0.0;
for ( j = 0; j <= 2; ++j )
{
result = (double *)(8LL * i + a3);
*result = *(double *)(8LL * j + a2) * *(double *)(a1 + 24LL * i + 8LL * j) + *result;
}
}
return result;
}