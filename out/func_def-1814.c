#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
void
WeightedLinefit(float *x, float *y, float *var, int N, float *ret_m, float *ret_b)
{
  int i;
  double s;
  double sx, sy;
  double sxx, sxy;
  double delta;
  double m, b;

  s = sx = sy = sxx = sxy = 0.;
  for (i = 0; i < N; i++)
    {
      s += 1./var[i];
      sx += x[i] / var[i];
      sy += y[i] / var[i];
      sxx += x[i] * x[i] / var[i];
      sxy += x[i] * y[i] / var[i];
    }

  delta = s * sxx - (sx * sx);
  b = (sxx * sy - sx * sxy) / delta;
  m = (s * sxy - sx * sy) / delta;

  *ret_m = m;
  *ret_b = b;
}