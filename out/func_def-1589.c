#include <math.h>

#include <float.h>

#include <stdbool.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

#include <stdio.h>

# 1 
static float
spectral_moda(float *x, int n)
{
  float temp[n];
  int i, j, pos_max;
  float max;

  for (i = 0; i < n; i++)
  {
    temp[i] = 0.f;
  }

  for (i = 0; i < n; i++)
  {
    for (j = i; j < n; j++)
    {
      if (x[j] == x[i])
        temp[i]++;
    }
  }

  max = temp[0];
  pos_max = 0;
  for (i = 0; i < n; i++)
  {
    if (temp[i] > max)
    {
      pos_max = i;
      max = temp[i];
    }
  }
  return x[pos_max];
}