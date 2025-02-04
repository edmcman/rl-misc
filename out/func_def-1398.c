#include <stdio.h>

#include <stdlib.h>

# 1 
void mat_add_matrix_i3(int m[3][3],
         int a[3][3],
         int b[3][3])
{
  int i, j;
  for ( i = 0; i < 3; i++ ) {
    for ( j = 0; j < 3; j++ ) {
      m[i][j] = a[i][j] + b[i][j];
    }
  }
}