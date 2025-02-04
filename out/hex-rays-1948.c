#include <stdio.h>

#include <math.h>

#include <string.h>

#include <stdarg.h>

#include <time.h>

# 1 
#include "defs.h"
double * func0(double *a1, char a2, double a3)
{
double *result; // rax

if ( (a2 & 1) != 0 )
*a1 = *a1 - a3;
else
a1[3] = a1[3] + a3;
if ( (a2 & 2) != 0 )
a1[1] = a1[1] - a3;
else
a1[4] = a1[4] + a3;
if ( (a2 & 4) != 0 )
{
result = a1 + 2;
a1[2] = a1[2] - a3;
}
else
{
result = a1 + 5;
a1[5] = a1[5] + a3;
}
return result;
}