
# 1 
#include "defs.h"
float * func0(__int64 a1)
{
float *result; // rax
int i; // [rsp+14h] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
result = (float *)(4LL * i + a1);
*result = -*result;
}
return result;
}