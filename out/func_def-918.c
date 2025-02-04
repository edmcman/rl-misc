#include <math.h>

#include <stdio.h>

#include <string.h>

# 1 
void
mlMatrixMultTo(const float *a, const float *b, float *result)
{
 unsigned int i, j;

 for(j = 0; j < 4; j++)
  for(i = 0; i < 4; i++)
   result[j * 4 + i] = a[0 * 4 + i] * b[j * 4 + 0] + a[1 * 4 + i] * b[j * 4 + 1] + a[2 * 4 + i] * b[j * 4 + 2] + a[3 * 4 + i] * b[j * 4 + 3];
}