#include <math.h>

# 1 
void transform_range_vertex(double range[6], double vertex[24]) {
  vertex[0 * 3] = vertex[4 * 3] = vertex[7 * 3] = vertex[3 * 3] = range[0];
  vertex[1 * 3] = vertex[5 * 3] = vertex[6 * 3] = vertex[2 * 3] = range[1];
  vertex[0 * 3 + 1] = vertex[1 * 3 + 1] = vertex[5 * 3 + 1] =
      vertex[4 * 3 + 1] = range[2];
  vertex[3 * 3 + 1] = vertex[2 * 3 + 1] = vertex[6 * 3 + 1] =
      vertex[7 * 3 + 1] = range[3];
  vertex[0 * 3 + 2] = vertex[1 * 3 + 2] = vertex[2 * 3 + 2] =
      vertex[3 * 3 + 2] = range[4];
  vertex[4 * 3 + 2] = vertex[5 * 3 + 2] = vertex[6 * 3 + 2] =
      vertex[7 * 3 + 2] = range[5];
  return;
}