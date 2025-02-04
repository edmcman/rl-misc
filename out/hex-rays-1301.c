
# 1 
#include "defs.h"
double * func0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
double *result; // rax
int i; // [rsp+2Ch] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
result = (double *)(8LL * i + a3);
*result = *(double *)(8LL * i + a4) * -(*(double *)(8LL * i + a1) - *(double *)(8LL * i + a2));
}
return result;
}