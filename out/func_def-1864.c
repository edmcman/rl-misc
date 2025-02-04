#include <math.h>

#include <string.h>

#include <stdio.h>

# 1 
void vector_cross(const double a[3], const double b[3],
                  double c[3]) {
  c[0] = a[1]*b[2] - a[2]*b[1];
  c[1] = a[2]*b[0] - a[0]*b[2];
  c[2] = a[0]*b[1] - a[1]*b[0];
}