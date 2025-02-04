#include <math.h>

# 1 
void transform2_frame(double coff_matrix[3][3], double view_point[3]) {
  double xx, yy, zz;

  xx = view_point[0];
  yy = view_point[1];
  zz = view_point[2];
  view_point[0] =
      xx * coff_matrix[0][0] + yy * coff_matrix[1][0] + zz * coff_matrix[2][0];
  view_point[1] =
      xx * coff_matrix[0][1] + yy * coff_matrix[1][1] + zz * coff_matrix[2][1];
  view_point[2] =
      xx * coff_matrix[0][2] + yy * coff_matrix[1][2] + zz * coff_matrix[2][2];

  return;
}