#include <stddef.h>

#include <stdlib.h>

#include <string.h>

# 1 
static void mat_inv_2(double inv[4], const double A[4])
{
  const double idet = 1/(A[0]*A[3]-A[1]*A[2]);
  inv[0] = idet*A[3];
  inv[1] = -(idet*A[1]);
  inv[2] = -(idet*A[2]);
  inv[3] = idet*A[0];
}