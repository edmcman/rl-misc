#include <math.h>

#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
float * func0(__int64 a1, __int64 a2)
{
float *result; // rax
unsigned int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 0xF; ++i )
{
result = (float *)(4LL * i + a1);
*result = *(float *)(4LL * i + a2) + *result;
}
return result;
}