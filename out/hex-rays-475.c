#include <math.h>

#include <stdlib.h>

# 1 
#include "defs.h"
double * func0(double *a1)
{
double *result; // rax

a1[6] = a1[2] - 10.613;
a1[8] = a1[2] - 115.0;
result = a1 + 14;
a1[14] = a1[2] + 12.0;
return result;
}