#include <float.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

# 1 
void matrix_inverse(double *mat, double *inv)






{
  double det=mat[0]*mat[4]*mat[8]+mat[3]*mat[7]*mat[2]+mat[6]*mat[1]*mat[5]-
          (mat[0]*mat[7]*mat[5]+mat[3]*mat[1]*mat[8]+mat[6]*mat[4]*mat[2]);

  if (det) {
    inv[0] = (mat[4]*mat[8]-mat[5]*mat[7])/det;
    inv[3] = (mat[5]*mat[6]-mat[3]*mat[8])/det;
    inv[6] = (mat[3]*mat[7]-mat[4]*mat[6])/det;
    inv[1] = (mat[2]*mat[7]-mat[1]*mat[8])/det;
    inv[4] = (mat[0]*mat[8]-mat[2]*mat[6])/det;
    inv[7] = (mat[1]*mat[6]-mat[0]*mat[7])/det;
    inv[2] = (mat[1]*mat[5]-mat[2]*mat[4])/det;
    inv[5] = (mat[2]*mat[3]-mat[0]*mat[5])/det;
    inv[8] = (mat[0]*mat[4]-mat[1]*mat[3])/det; }
  else {
    inv[0] = mat[0]; inv[3] = mat[1]; inv[6] = mat[2]; inv[1] = mat[3];
    inv[4] = mat[4]; inv[7] = mat[5]; inv[2] = mat[6]; inv[5] = mat[7];
    inv[8] = mat[8]; }
}