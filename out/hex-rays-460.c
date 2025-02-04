#include <stdio.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3, double *a4, double a5, double a6)
{
double *result; // rax

*a1 = a5 + a6;
*a2 = a5 - a6;
*a3 = a5 * a6;
result = a4;
*a4 = a5 / a6;
return result;
}