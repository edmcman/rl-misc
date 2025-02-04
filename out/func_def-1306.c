#include <math.h>

#include <stdlib.h>

#include <stdio.h>

#include <inttypes.h>

# 1 
void inv_matrix_multiply(double m[][3], double *in, double *out) {
  int i,j;
  for (i=0; i<3; i++) out[i] = 0;
  for (i=0; i<3; i++)
    for (j=0; j<3; j++)
      out[i] += m[j][i]*in[j];
}