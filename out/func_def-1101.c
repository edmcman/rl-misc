#include <math.h>

#include <stdio.h>

#include <string.h>

# 1 
void
mlMatrixSub(float *a, const float *b)
{
 unsigned int i;

 for(i = 0; i < 16; i++)
  a[i] -= b[i];
}