
# 1 
#include "defs.h"
double * func0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
double *result; // rax
int i; // [rsp+28h] [rbp-8h]
int j; // [rsp+2Ch] [rbp-4h]

for ( i = 0; i <= 63; ++i )
{
*(_QWORD *)(8LL * i + a3) = 0LL;
for ( j = 0; j <= 2; ++j )
*(double *)(8LL * i + a3) = *(double *)(8LL * (3 * i + j) + a1) * *(double *)(8LL * j + a2)
+ *(double *)(8LL * i + a3);
result = (double *)(8LL * i + a3);
*result = *(double *)(8LL * i + a4) * *result;
}
return result;
}