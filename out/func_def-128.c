#include <stdio.h>

#include <math.h>

# 1 
void transf(double a, double b, double c, double d, double e, double f,
       double *x, double *y)
{
  double xp, yp;

  xp = a + b*(*x) + c*(*y);
  yp = d + e*(*x) + f*(*y);

  *x = xp;
  *y = yp;
  return;
}