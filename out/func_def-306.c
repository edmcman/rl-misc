#include <math.h>

#include <stdio.h>

# 1 
int clipmaxfloat(float *x, float xmax, long n)
{
  long i = 0;
  for (i=0;i<n;++i) {
    if (x[i] > xmax) x[i]=xmax;
  }
  return (0);
}