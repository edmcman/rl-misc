#include <assert.h>

# 1 
static void transpose(long m[3][3])
{
  long tmp;
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = i; j < 3; j++) {
      tmp = m[i][j];
      m[i][j] = m[j][i];
      m[j][i] = tmp;
    }
  }
}