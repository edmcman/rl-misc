#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <string.h>

# 1 
#include "defs.h"
double * func0(double *a1, double a2, double a3, double a4, double a5)
{
double *result; // rax

*a1 = a2 * a2 + a3 * a3 - a4 * a4 - a5 * a5;
a1[1] = a2 * a5 + a3 * a4 + a2 * a5 + a3 * a4;
a1[2] = a3 * a5 - a2 * a4 + a3 * a5 - a2 * a4;
a1[3] = a3 * a4 - a2 * a5 + a3 * a4 - a2 * a5;
a1[4] = a2 * a2 - a3 * a3 + a4 * a4 - a5 * a5;
a1[5] = a2 * a3 + a4 * a5 + a2 * a3 + a4 * a5;
a1[6] = a2 * a4 + a3 * a5 + a2 * a4 + a3 * a5;
a1[7] = a4 * a5 - a2 * a3 + a4 * a5 - a2 * a3;
result = a1 + 8;
a1[8] = a5 * a5 + a2 * a2 - a3 * a3 - a4 * a4;
return result;
}