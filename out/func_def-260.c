#include <stdio.h>

#include <stddef.h>

#include <assert.h>

# 1 
static void mat_cast_matrix_3l_to_3d(double m[3][3], long a[3][3])
{
  m[0][0] = a[0][0];
  m[0][1] = a[0][1];
  m[0][2] = a[0][2];
  m[1][0] = a[1][0];
  m[1][1] = a[1][1];
  m[1][2] = a[1][2];
  m[2][0] = a[2][0];
  m[2][1] = a[2][1];
  m[2][2] = a[2][2];
}