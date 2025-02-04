#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <float.h>

# 1 
#include "defs.h"
double * func0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
int k; // ebx
double *result; // rax
int j; // ebx
int i; // ebx
__int64 v8; // xmm0_8

if ( a2 )
{
if ( a3 )
{
for ( i = 0; i < a4; ++i )
{
if ( *(double *)(8LL * i + a2) < *(double *)(8LL * i + a1) )
{
if ( *(double *)(8LL * i + a3) < *(double *)(8LL * i + a1) )
{
if ( *(double *)(8LL * i + a2) < *(double *)(8LL * i + a3) )
v8 = *(_QWORD *)(8LL * i + a3);
else
v8 = *(_QWORD *)(8LL * i + a2);
}
else
{
v8 = *(_QWORD *)(8LL * i + a1);
}
}
else if ( *(double *)(8LL * i + a3) < *(double *)(8LL * i + a2) )
{
if ( *(double *)(8LL * i + a1) < *(double *)(8LL * i + a3) )
v8 = *(_QWORD *)(8LL * i + a3);
else
v8 = *(_QWORD *)(8LL * i + a1);
}
else
{
v8 = *(_QWORD *)(8LL * i + a2);
}
result = (double *)(8LL * i + a1);
*(_QWORD *)result = v8;
}
}
else
{
for ( j = 0; j < a4; ++j )
{
result = (double *)(8LL * j + a2);
if ( *result > *(double *)(8LL * j + a1) )
{
result = (double *)(8LL * j + a1);
*result = *(double *)(a2 + 8LL * j);
}
}
}
}
else if ( a3 )
{
for ( k = 0; k < a4; ++k )
{
result = (double *)(8LL * k + a3);
if ( *(double *)(8LL * k + a1) > *result )
{
result = (double *)(8LL * k + a1);
*result = *(double *)(a3 + 8LL * k);
}
}
}
return result;
}