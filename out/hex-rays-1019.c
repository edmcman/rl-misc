#include <stdio.h>

# 1 
#include "defs.h"
double * func0(__int64 a1, __int64 a2)
{
double *result; // rax
int i; // [rsp+10h] [rbp-10h]
int j; // [rsp+14h] [rbp-Ch]
double v5; // [rsp+18h] [rbp-8h]

for ( i = 0; i <= 4; ++i )
{
v5 = 0.0;
for ( j = 0; j <= 9; ++j )
v5 = *(double *)(a1 + 40LL * j + 8LL * i) + v5;
result = (double *)(8LL * i + a2);
*result = v5 / 10.0;
}
return result;
}