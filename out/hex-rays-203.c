
# 1 
#include "defs.h"
double * func0(double *a1, double a2, double a3, double a4)
{
double *result; // rax

*a1 = a2 * a3 + a4;
result = a1 + 1;
a1[1] = a2 * a3 - a4;
return result;
}