#include <stdio.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double *result; // rax

*a1 = *a1 - 1.5;
result = a2;
*a2 = *a2 + 1.5;
return result;
}