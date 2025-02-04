#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
void geom_matmat3d(const double a[9], const double b[9], double c[9]){
 c[0] = a[0]*b[0] + a[3]*b[1] + a[6]*b[2];
 c[1] = a[1]*b[0] + a[4]*b[1] + a[7]*b[2];
 c[2] = a[2]*b[0] + a[5]*b[1] + a[8]*b[2];
 c[3] = a[0]*b[3] + a[3]*b[4] + a[6]*b[5];
 c[4] = a[1]*b[3] + a[4]*b[4] + a[7]*b[5];
 c[5] = a[2]*b[3] + a[5]*b[4] + a[8]*b[5];
 c[6] = a[0]*b[6] + a[3]*b[7] + a[6]*b[8];
 c[7] = a[1]*b[6] + a[4]*b[7] + a[7]*b[8];
 c[8] = a[2]*b[6] + a[5]*b[7] + a[8]*b[8];
}