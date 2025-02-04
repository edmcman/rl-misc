
# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, double *a3)
{
__int64 result; // rax
double v4; // xmm0_8
int v5; // [rsp+20h] [rbp-8h]
int v6; // [rsp+24h] [rbp-4h]

v5 = (a2 - 1) / 2;
v6 = a2 / 2;
if ( a2 )
{
if ( v5 == v6 )
v4 = *(double *)(8LL * v5 + a1);
else
v4 = (*(double *)(8LL * v6 + a1) + *(double *)(8LL * v5 + a1)) / 2.0;
*a3 = v4;
result = 0LL;
}
else
{
*a3 = 0.0;
result = 0LL;
}
return result;
}