#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

#include <time.h>

# 1 
void crossProduct(double *b, double *c, double *out)
{
  out[0] = b[1] * c[2] - b[2] * c[1];
  out[1] = b[2] * c[0] - b[0] * c[2];
  out[2] = b[0] * c[1] - b[1] * c[0];
}