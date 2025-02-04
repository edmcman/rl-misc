
# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3, double *a4)
{
double *result; // rax

*a3 = a1[1] - a2[1];
a3[1] = *a2 - *a1;
result = a4;
*a4 = -(a1[1] * a3[1] + *a3 * *a1);
return result;
}