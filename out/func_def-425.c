#include <math.h>

# 1 
void tranverse_transform(double screen_point[3], double point_s[3],
                         double inv_matrix[3][3], double point_o[3]) {
  int i;
  double xx, yy, zz;

  xx = point_s[0];
  yy = point_s[1];
  zz = point_s[2];
  point_o[0] =
      xx * inv_matrix[0][0] + yy * inv_matrix[1][0] + zz * inv_matrix[2][0];
  point_o[1] =
      xx * inv_matrix[0][1] + yy * inv_matrix[1][1] + zz * inv_matrix[2][1];
  point_o[2] =
      xx * inv_matrix[0][2] + yy * inv_matrix[1][2] + zz * inv_matrix[2][2];


  for (i = 0; i < 3; i++) point_o[i] += screen_point[i];
  return;
}