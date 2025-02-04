#include <stdio.h>

#include <stdlib.h>

#include <stdint.h>

#include <math.h>

#include <sys/time.h>

#include <errno.h>

#include <time.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3, double a4, double a5, double a6, double a7)
{
double *result; // rax

*a1 = a5 - a7;
*a2 = a6 - a4;
result = a3;
*a3 = -(a4 * a7 - a6 * a5);
return result;
}