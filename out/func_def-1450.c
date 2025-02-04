#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
void mat_translate(float *a, float x, float y, float z)
{
  float b12, b13, b14, b15;
  b12 = a[0] * x + a[4] * y + a[8] * z + a[12];
  b13 = a[1] * x + a[5] * y + a[9] * z + a[13];
  b14 = a[2] * x + a[6] * y + a[10] * z + a[14];
  b15 = a[3] * x + a[7] * y + a[11] * z + a[15];
  a[12] = b12; a[13] = b13; a[14] = b14; a[15] = b15;
}