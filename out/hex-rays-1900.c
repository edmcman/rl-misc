#include <stdio.h>

# 1 
#include "defs.h"
double * func0(int a1, int a2, _DWORD *a3, double *a4)
{
double *result; // rax

*a3 = a2 + a1;
result = a4;
*a4 = 0.5 * (double)(a1 + a2);
return result;
}