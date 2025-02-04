#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
double * func0(__int64 a1)
{
double *result; // rax
int i; // [rsp+Ch] [rbp-Ch]

for ( i = 0; i <= 9; ++i )
{
result = (double *)(8LL * i + a1);
*result = 5.0 - (double)i * 0.5;
}
return result;
}