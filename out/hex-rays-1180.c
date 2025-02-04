#include <stdio.h>

#include <math.h>

#include <stdlib.h>

# 1 
#include "defs.h"
double * func0(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4, int *a5, double *a6)
{
double *result; // rax
int i; // [rsp+3Ch] [rbp-4h]

*a3 = *a1;
*a4 = *a1;
*a5 = 0;
for ( i = 0; i < a2; ++i )
{
if ( a1[i] < *a3 )
*a3 = a1[i];
if ( a1[i] > *a4 )
*a4 = a1[i];
*a5 += a1[i];
}
result = a6;
*a6 = (double)*a5 / (double)a2;
return result;
}