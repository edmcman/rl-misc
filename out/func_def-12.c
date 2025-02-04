#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

#include <time.h>

# 1 
void vertexByScalar(double *a, double b, double *out)
{
  out[0] = a[0] * b;
  out[1] = a[1] * b;
  out[2] = a[2] * b;
}