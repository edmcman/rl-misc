#include <stdio.h>

# 1 
void mat_mul(const int a[4][3], const int b[3][4], int c[3][3])
{
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int t = 0;
      for (int k = 0; k < 4; k++) {
        t += b[i][k] * a[k][j];
      }
      c[i][j] = t;
    }
  }
}