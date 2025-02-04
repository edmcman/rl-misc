#include <malloc.h>

#include <string.h>

#include <stdio.h>

# 1 
static void mac_cmplx(float *x, float *h, float *y)
{
 y[0] += x[0] * h[0] - x[1] * h[1];
 y[1] += x[0] * h[1] + x[1] * h[0];
}