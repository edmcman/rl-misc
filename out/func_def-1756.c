#include <string.h>

#include <ctype.h>

# 1 
void swi_cross_prod(double *a, double *b, double *x)
{
  x[0] = a[1]*b[2] - a[2]*b[1];
  x[1] = a[2]*b[0] - a[0]*b[2];
  x[2] = a[0]*b[1] - a[1]*b[0];
}