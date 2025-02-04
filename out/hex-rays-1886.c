
# 1 
#include "defs.h"
double * func0(__int64 a1)
{
double *result; // rax
__int64 i; // [rsp+8h] [rbp-10h]

for ( i = 0LL; i <= 99; ++i )
{
result = (double *)(400 * i + a1);
*result = (double)(int)i * 0.1 + 0.0;
}
return result;
}