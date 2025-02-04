
# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3, double *a4)
{
double *result; // rax
double v5; // [rsp+28h] [rbp-8h]

v5 = *a4 + *a1 + *a2 + *a3;
*a1 = *a1 / v5;
*a2 = *a2 / v5;
*a3 = *a3 / v5;
result = a4;
*a4 = *a4 / v5;
return result;
}