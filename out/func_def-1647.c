#include <stddef.h>

#include <stdlib.h>

#include <string.h>

# 1 
static void mat_inv_3(double inv[9], const double A[9])
{
  const double a = A[4]*A[8]-A[5]*A[7],
               b = A[5]*A[6]-A[3]*A[8],
               c = A[3]*A[7]-A[4]*A[6],
            idet = 1/(A[0]*a+A[1]*b+A[2]*c);
  inv[0] = idet*a;
  inv[1] = idet*(A[2]*A[7]-A[1]*A[8]);
  inv[2] = idet*(A[1]*A[5]-A[2]*A[4]);
  inv[3] = idet*b;
  inv[4] = idet*(A[0]*A[8]-A[2]*A[6]);
  inv[5] = idet*(A[2]*A[3]-A[0]*A[5]);
  inv[6] = idet*c;
  inv[7] = idet*(A[1]*A[6]-A[0]*A[7]);
  inv[8] = idet*(A[0]*A[4]-A[1]*A[3]);
}