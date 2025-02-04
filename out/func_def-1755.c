#include <math.h>

#include <stdint.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
static void
linear_regression (double *x, double *y, unsigned int n, double *a, double *b, double *r)
{
  double sx = 0, sy = 0, sx2 = 0, sy2 = 0, sxy = 0;
  double d;
  unsigned int i;
  for (i = 0; i < n; i++) {
    sx += x[i];
    sy += y[i];
    sx2 += x[i] * x[i];
    sy2 += y[i] * y[i];
    sxy += x[i] * y[i];
  }
  d = n * sx2 - sx * sx;
  if (d == 0) {
    *a = *b = *r = 0;
    return;
  }
  *a = (sy * sx2 - sx * sxy) / d;
  *b = (n * sxy - sx * sy) / d;
  d = (n * sx2 - sx * sx) * (n * sy2 - sy * sy);
  if (d <= 0) {
    *a = *b = *r = 0;
    return;
  }
}