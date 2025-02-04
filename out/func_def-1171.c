#include <stdlib.h>

#include <math.h>

#include <stdio.h>

# 1 
void flux(const double *u, double g, double *f)
{
  f[0] = u[0]*u[1];
  f[1] = u[0]*(u[1]*u[1] + g*u[0]/2.);
  f[2] = u[0]*u[1]*u[2];

}