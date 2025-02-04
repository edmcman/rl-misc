#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double a2)
{
double *result; // rax
double v3; // [rsp+20h] [rbp-10h]
double v4; // [rsp+28h] [rbp-8h]

v3 = 1.26 * (a2 / 4286000.0 - 4286000.0 / a2);
v4 = v3 * v3 + 1.0;
*a1 = 0.115 * (16.0 * (a2 / 4286000.0 - 4286000.0 / a2) * v3 + 1.0) / v4;
result = a1 + 1;
a1[1] = 0.115 * (16.0 * (a2 / 4286000.0 - 4286000.0 / a2) - v3) / v4;
return result;
}