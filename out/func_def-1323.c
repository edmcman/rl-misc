#include <math.h>

#include <stdio.h>

#include <string.h>

# 1 
void
mlMatrixLoadBillboard(float *a, const float *m, const float *p)
{
 a[0] = m[0]; a[1] = m[4]; a[2] = m[8]; a[3] = 0.0f;
 a[4] = m[1]; a[5] = m[5]; a[6] = m[9]; a[7] = 0.0f;
 a[8] = m[2]; a[9] = m[6]; a[10] = m[10]; a[11] = 0.0f;
 a[12] = p[0]; a[13] = p[1]; a[14] = p[2]; a[15] = 1.0f;
}