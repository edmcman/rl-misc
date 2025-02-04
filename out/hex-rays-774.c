
# 1 
#include "defs.h"
double * func0(double *a1, double *a2, int a3, int a4)
{
double *result; // rax

*a2 = -*a2;
*a1 = (*a1 + *a1) / (double)a3 - 1.0;
result = a2;
*a2 = (*a2 + *a2) / (double)a4 + 1.0;
return result;
}