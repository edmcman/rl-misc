#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
void cross(double *u, double *v, double *w)
{
  w[0] = u[1]*v[2] - u[2]*v[1];
  w[1] = u[2]*v[0] - u[0]*v[2];
  w[2] = u[0]*v[1] - u[1]*v[0];
}