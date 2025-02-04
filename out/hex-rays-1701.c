#include <string.h>

#include <stdlib.h>

#include <errno.h>

#include <math.h>

#include <float.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double a3, double a4, double a5, double a6)
{
double *result; // rax

*a1 = (a3 * a5 + a4 * a6) / (a6 * a6 + a5 * a5);
result = a2;
*a2 = (a4 * a5 - a3 * a6) / (a6 * a6 + a5 * a5);
return result;
}