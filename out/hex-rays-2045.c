#include <stdio.h>

#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double *result; // rax
double v3; // [rsp+18h] [rbp-8h]

v3 = a2[3] * *a2 - a2[2] * a2[1];
*a1 = a2[3] / v3;
a1[1] = -a2[1] / v3;
a1[2] = -a2[2] / v3;
result = a1 + 3;
a1[3] = *a2 / v3;
return result;
}