#include <stdio.h>

# 1 
#include "defs.h"
double * func0(double *a1, double a2)
{
double *result; // rax

result = a1;
*a1 = 1.0 / a2;
return result;
}