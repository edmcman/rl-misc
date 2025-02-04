#include <stdlib.h>

# 1 
float dotprod_ref (float B[], float C[], int n)
{
  int i;
  float sum = 0.0;

  for (i = 0; i < n; i++)
    sum += B[i] * C[i];

  return sum;
}