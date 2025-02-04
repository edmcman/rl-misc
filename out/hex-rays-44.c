#include <stdio.h>

#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3, double *a4, double a5, double a6, double a7)
{
double *result; // rax

*a1 = a4[2] * a7 + *a4 * a5 + a4[1] * a6;
*a2 = a4[5] * a7 + a4[3] * a5 + a4[4] * a6;
result = a3;
*a3 = a4[8] * a7 + a4[6] * a5 + a4[7] * a6;
return result;
}