#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, _QWORD *a2, double *a3)
{
double *result; // rax

*a3 = (double)(int)a2[2] * a1[2] + *a1 * (double)(int)*a2 + (double)(int)a2[1] * a1[1];
a3[1] = (double)(int)a2[2] * a1[5] + a1[3] * (double)(int)*a2 + (double)(int)a2[1] * a1[4];
result = a3 + 2;
a3[2] = (double)(int)a2[2] * a1[8] + a1[6] * (double)(int)*a2 + (double)(int)a2[1] * a1[7];
return result;
}