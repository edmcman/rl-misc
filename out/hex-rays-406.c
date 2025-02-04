#include <math.h>

#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
float * func0(__int64 a1, float a2)
{
float *result; // rax
unsigned int i; // [rsp+18h] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
result = (float *)(4LL * i + a1);
*result = *result * a2;
}
return result;
}