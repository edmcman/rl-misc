#include <stdlib.h>

#include <string.h>

#include <omp.h>

#include <math.h>

#include <float.h>

# 1 
static void Complex_Division(double x, double y, double u, double v,
        double* a, double* b)
{
 double q = u*u + v*v;

 *a = (x * u + y * v) / q;
 *b = (y * u - x * v) / q;
}