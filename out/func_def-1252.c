#include <math.h>

# 1 
void matmat_mult(float mat1[4*4], float mat2[4*4], float mat3[4*4]) {
 int i, j, k;
 for (j=0; j<4; j++) {
  for (i=0; i<4; i++) {
   mat3[i+4*j] = 0.0;
   for (k=0; k<4; k++) {
    mat3[i+4*j] += mat1[k+4*j] * mat2[i+4*k];
   }
  }
 }
}