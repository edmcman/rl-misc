#include <stdio.h>

#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double a3, double a4, double a5, double a6, double a7, double a8)
{
double *result; // rax
double v9; // [rsp+48h] [rbp-8h]

v9 = *a2 * a8 + *a1 * a7 + a6;
*a1 = *a2 * a5 + *a1 * a4 + a3;
result = a2;
*a2 = v9;
return result;
}