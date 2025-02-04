#include <stddef.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <float.h>

#include <stdio.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3)
{
double *result; // rax
double v4; // [rsp+20h] [rbp-8h]

v4 = 1.0 / (a2[2] * *a2 - a2[1] * a2[1]);
*a1 = (*a3 * a2[2] - a3[1] * a2[1]) * v4;
result = a1 + 1;
a1[1] = (a3[1] * *a2 - *a3 * a2[1]) * v4;
return result;
}