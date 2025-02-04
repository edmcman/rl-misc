#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3, double *a4)
{
double *result; // rax

*a1 = a4[2] * a3[2] + *a3 * *a4 + a4[1] * a3[1] + *a2;
a1[1] = a4[2] * a3[4] + a3[1] * *a4 + a4[1] * a3[3] + a2[1];
result = a1 + 2;
a1[2] = a4[2] * a3[5] + a3[2] * *a4 + a4[1] * a3[4] + a2[2];
return result;
}