
# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3, double a4, double a5)
{
double *result; // rax

*a3 = (a2[2] * a1[2] + *a1 * *a2 + a2[1] * a1[1]) * a4 + *a3 * a5;
a3[1] = (a2[2] * a1[5] + a1[3] * *a2 + a2[1] * a1[4]) * a4 + a3[1] * a5;
result = a3 + 2;
a3[2] = (a2[2] * a1[8] + a1[6] * *a2 + a2[1] * a1[7]) * a4 + a3[2] * a5;
return result;
}