#include <assert.h>

# 1 
static void matmul(long m[3][3],
                   long a[3][3],
                   long b[3][3])
{
  int i, j;
  long c[3][3];

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];
    }
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      m[i][j] = c[i][j];
    }
  }
}