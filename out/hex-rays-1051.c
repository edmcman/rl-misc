
# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double *result; // rax

*a1 = *a2 + *a1;
*a2 = *a1 - *a2;
result = a1;
*a1 = *a1 - *a2;
return result;
}