
# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3)
{
double *result; // rax

*a1 = *a3 * a2[3] + *a2 * a3[3] + a3[2] * a2[1] + a3[1] * -a2[2];
a1[1] = a3[1] * a2[3] + -*a2 * a3[2] + a3[3] * a2[1] + *a3 * a2[2];
a1[2] = a3[2] * a2[3] + *a2 * a3[1] + *a3 * -a2[1] + a3[3] * a2[2];
result = a1 + 3;
a1[3] = a3[3] * a2[3] + -*a2 * *a3 + a3[1] * -a2[1] + a3[2] * -a2[2];
return result;
}