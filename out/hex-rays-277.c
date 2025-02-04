#include <stdlib.h>

#include <string.h>

#include <omp.h>

#include <math.h>

#include <float.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double a3, double a4, double a5, double a6)
{
double *result; // rax
double v7; // [rsp+38h] [rbp-8h]

v7 = a6 * a6 + a5 * a5;
*a1 = (a4 * a6 + a3 * a5) / v7;
result = a2;
*a2 = (a4 * a5 - a3 * a6) / v7;
return result;
}