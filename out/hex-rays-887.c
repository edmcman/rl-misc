
# 1 
#include "defs.h"
double * func0(__int64 a1, __int64 a2, __int64 a3)
{
double *result; // rax
int i; // [rsp+18h] [rbp-10h]
int j; // [rsp+1Ch] [rbp-Ch]
double v6; // [rsp+20h] [rbp-8h]

for ( i = 0; i <= 3; ++i )
{
v6 = 0.0;
for ( j = 0; j <= 3; ++j )
v6 = *(double *)(8LL * j + a2) * *(double *)(a1 + 32LL * i + 8LL * j) + v6;
result = (double *)(8LL * i + a3);
*result = v6;
}
return result;
}