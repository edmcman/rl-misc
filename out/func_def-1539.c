#include <stdio.h>

#include <stdlib.h>

#include <sys/time.h>

#include <time.h>

#include <math.h>

# 1 
static void vecAxpy(double *x, double *y, int size, double alpha)
{
  int i;
  for (i = 0; i < size; i++) {
    y[i] = y[i] + alpha * x[i];
  }
}