#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
void mat_transpose(float *m)
{
  float a[16];
  a[1] = m[4]; a[2] = m[8]; a[3] = m[12];
  a[4] = m[1]; a[6] = m[9]; a[7] = m[13];
  a[8] = m[2]; a[9] = m[6]; a[11] = m[14];
  a[12] = m[3]; a[13] = m[7]; a[14] = m[11];

  m[1] = a[1]; m[2] = a[2]; m[3] = a[3];
  m[4] = a[4]; m[6] = a[6]; m[7] = a[7];
  m[8] = a[8]; m[9] = a[9]; m[11] = a[11];
  m[12] = a[12]; m[13] = a[13]; m[14] = a[14];
}