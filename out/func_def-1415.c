#include <assert.h>

# 1 
static void second_finalize(long L[3][3], long A[3][3])
{
  L[0][0] = 1;
  L[0][1] = 0;
  L[0][2] = 0;
  L[1][0] = 0;
  L[1][1] = 1;
  L[1][2] = 0;
  L[2][0] = 0;
  L[2][1] = -A[2][1] / A[1][1];
  L[2][2] = 1;
}