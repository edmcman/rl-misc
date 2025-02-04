#include <math.h>

# 1 
void transform_frame3(double screen_point[3], double f[3][3],
                      double coff_matrix[3][3], double n_f[3][3]) {
  int i, j;
  double xx, yy, zz;

  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++) n_f[i][j] = f[i][j];

  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++) n_f[i][j] -= screen_point[j];

  for (i = 0; i < 3; i++) {
    xx = n_f[i][0];
    yy = n_f[i][1];
    zz = n_f[i][2];
    n_f[i][0] = xx * coff_matrix[0][0] + yy * coff_matrix[1][0] +
                zz * coff_matrix[2][0];
    n_f[i][1] = xx * coff_matrix[0][1] + yy * coff_matrix[1][1] +
                zz * coff_matrix[2][1];
    n_f[i][2] = xx * coff_matrix[0][2] + yy * coff_matrix[1][2] +
                zz * coff_matrix[2][2];
  }
  return;
}