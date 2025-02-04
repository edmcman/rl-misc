#include <math.h>

#include <stdio.h>

#include <string.h>

# 1 
void
mlMatrixSubTo(const float *a, const float *b, float *result)
{
 unsigned int i;

 for(i = 0; i < 16; i++)
  result[i] = a[i] - b[i];
}