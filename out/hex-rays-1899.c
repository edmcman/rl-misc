#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double a3, double a4)
{
double *result; // rax

*a1 = a3 * a4;
result = a2;
*a2 = a4 - 1.0;
return result;
}