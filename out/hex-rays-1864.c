#include <math.h>

#include <string.h>

#include <stdio.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3)
{
double *result; // rax

*a3 = a2[2] * a1[1] - a2[1] * a1[2];
a3[1] = *a2 * a1[2] - a2[2] * *a1;
result = a3 + 2;
a3[2] = a2[1] * *a1 - *a2 * a1[1];
return result;
}