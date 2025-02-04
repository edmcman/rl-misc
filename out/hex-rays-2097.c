#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3, int a4)
{
double *result; // rax

*a1 = a3[2 * a4] * a2[a4] - a3[a4] * a2[2 * a4];
a1[1] = *a3 * a2[2 * a4] - a3[2 * a4] * *a2;
result = a1 + 2;
a1[2] = a3[a4] * *a2 - *a3 * a2[a4];
return result;
}