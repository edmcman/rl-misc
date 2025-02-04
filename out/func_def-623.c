#include <stdlib.h>

#include <stdio.h>

#include <malloc.h>

#include <math.h>

# 1 
static void points2coeff(double v0, double v1, double v2, double v3,
    double *coeff)
{
    coeff[3] = v3 + 3 * v1 - (v0 + 3 * v2);
    coeff[2] = 3 * v0 + 3 * v2 - 6 * v1;
    coeff[1] = 3 * (v1 - v0);
    coeff[0] = v0;
}