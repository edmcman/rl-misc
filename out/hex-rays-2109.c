#include <stdio.h>

# 1 
#include "defs.h"
double * func0(double *a1)
{
double *result; // rax

result = a1;
*a1 = *a1 + *a1;
return result;
}