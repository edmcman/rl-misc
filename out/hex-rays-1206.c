
# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3)
{
double *result; // rax

*a3 = *a1 - *a2;
result = a3 + 1;
a3[1] = a1[1] - a2[1];
return result;
}