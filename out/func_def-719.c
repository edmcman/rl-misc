#include <stdio.h>

#include <stdlib.h>

# 1 
static int delaunay_reduce_basis(double basis[4][3],
     const double symprec)
{
  int i, j, k, l;
  double dot_product;

  for (i = 0; i < 4; i++) {
    for (j = i+1; j < 4; j++) {
      dot_product = 0.0;
      for (k = 0; k < 3; k++) {
 dot_product += basis[i][k] * basis[j][k];
      }
      if (dot_product > symprec) {
 for (k = 0; k < 4; k++) {
   if (! (k == i || k == j)) {
     for (l = 0; l < 3; l++) {
       basis[k][l] += basis[i][l];
     }
   }
 }
 for (k = 0; k < 3; k++) {
   basis[i][k] = -basis[i][k];
 }
 return 0;
      }
    }
  }

  return 1;
}