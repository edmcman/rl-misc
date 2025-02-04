#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <string.h>

# 1 
void EulerParameters(double *rotM,double a,double b,double c,double d)
{
  *(rotM+0) = a*a + b*b - c*c - d*d;
  *(rotM+1) = 2*(b*c + a*d);
  *(rotM+2) = 2*(b*d - a*c);
  *(rotM+3) = 2*(b*c - a*d);
  *(rotM+4) = a*a - b*b + c*c - d*d;
  *(rotM+5) = 2*(c*d + a*b);
  *(rotM+6) = 2*(b*d + a*c);
  *(rotM+7) = 2*(c*d - a*b);
  *(rotM+8) = a*a - b*b - c*c + d*d;
  return;
}