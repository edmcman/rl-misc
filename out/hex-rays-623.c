#include <stdlib.h>

#include <stdio.h>

#include <malloc.h>

#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double a2, double a3, double a4, double a5)
{
double *result; // rax

a1[3] = 3.0 * a3 + a5 - (3.0 * a4 + a2);
a1[2] = 3.0 * a4 + a2 * 3.0 - 6.0 * a3;
a1[1] = 3.0 * (a3 - a2);
result = a1;
*a1 = a2;
return result;
}