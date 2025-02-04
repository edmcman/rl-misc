#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double a3, double a4)
{
double *result; // rax

*a1 = 3.141592653589793 * a3 / 180.0;
result = a2;
*a2 = 3.141592653589793 * a4 / 180.0;
return result;
}