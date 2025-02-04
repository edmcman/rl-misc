#include <stdio.h>

#include <stdlib.h>

# 1 
static void get_exteneded_basis_2D(double basis[3][3],
       double lattice[3][2])
{
  int i, j;

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      basis[i][j] = lattice[j][i];
    }
  }

  for (i = 0; i < 3; i++) {
    basis[2][i] = -lattice[i][0] -lattice[i][1];
  }
}