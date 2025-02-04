
# 1 
#include "defs.h"
double * func0(__int64 a1, int *a2, __int64 a3, int *a4, double *a5)
{
double *result; // rax
int i; // [rsp+2Ch] [rbp-Ch]
int j; // [rsp+30h] [rbp-8h]
int v8; // [rsp+34h] [rbp-4h]

*a5 = 0.0;
for ( i = 0; i < *a4; ++i )
{
v8 = 0;
for ( j = 0; j < *a2; ++j )
{
if ( *(double *)(8LL * i + a3) <= *(double *)(8LL * j + a1) )
{
if ( *(double *)(8LL * j + a1) > *(double *)(8LL * i + a3) )
++v8;
}
else
{
--v8;
}
}
*a5 = (double)v8 / (double)*a4 + *a5;
}
result = a5;
*a5 = *a5 / (double)*a2;
return result;
}