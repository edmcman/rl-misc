#include <stdio.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double *result; // rax
int v3; // [rsp+1Ch] [rbp-4h]

v3 = (int)*a1;
*a1 = *a2;
result = a2;
*a2 = (double)v3;
return result;
}