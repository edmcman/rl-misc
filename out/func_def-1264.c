#include <stdlib.h>

#include <stdio.h>

#include <assert.h>

#include <math.h>

# 1 
void atmbck (const double *delta, double *v)
{
 v[0] -= delta[0];
 v[1] -= delta[1];
 v[2] -= delta[2];
}