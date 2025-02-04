#include <stdio.h>

#include <stdlib.h>

# 1 
void mat_multiply_matrix_vector_di3(double v[3],
        double a[3][3],
        const int b[3])
{
  int i;
  double c[3];
  for (i = 0; i < 3; i++)
    c[i] = a[i][0] * b[0] + a[i][1] * b[1] + a[i][2] * b[2];
  for (i = 0; i < 3; i++)
    v[i] = c[i];
}