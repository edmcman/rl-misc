#include <math.h>

#include <stdio.h>

#include <string.h>

# 1 
void
mlMatrixLoad(float *x, float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p)
{
 x[0] = a; x[4] = e; x[8] = i; x[12] = m;
 x[1] = b; x[5] = f; x[9] = j; x[13] = n;
 x[2] = c; x[6] = g; x[10] = k; x[14] = o;
 x[3] = d; x[7] = h; x[11] = l; x[15] = p;
}