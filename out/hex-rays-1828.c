#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3)
{
double *result; // rax

*a3 = a2[2] * a1[6] + *a1 * *a2 + a2[1] * a1[3];
a3[1] = a2[2] * a1[7] + a1[1] * *a2 + a2[1] * a1[4];
a3[2] = a2[2] * a1[8] + a1[2] * *a2 + a2[1] * a1[5];
a3[3] = a2[5] * a1[6] + *a1 * a2[3] + a2[4] * a1[3];
a3[4] = a2[5] * a1[7] + a1[1] * a2[3] + a2[4] * a1[4];
a3[5] = a2[5] * a1[8] + a1[2] * a2[3] + a2[4] * a1[5];
a3[6] = a2[8] * a1[6] + *a1 * a2[6] + a2[7] * a1[3];
a3[7] = a2[8] * a1[7] + a1[1] * a2[6] + a2[7] * a1[4];
result = a3 + 8;
a3[8] = a2[8] * a1[8] + a1[2] * a2[6] + a2[7] * a1[5];
return result;
}