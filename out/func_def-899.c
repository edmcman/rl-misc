#include <stdio.h>

# 1 
static void unpack_generators(int rot[3][3][3], int generators[3][9])
{
  int i, j, k;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 3; k++) {
 rot[i][j][k] = generators[i][j*3+k];
      }
    }
  }
}