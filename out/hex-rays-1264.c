#include <stdlib.h>

#include <stdio.h>

#include <assert.h>

#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double *result; // rax

*a2 = *a2 - *a1;
a2[1] = a2[1] - a1[1];
result = a2 + 2;
a2[2] = a2[2] - a1[2];
return result;
}