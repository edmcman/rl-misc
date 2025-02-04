#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
void geom_matvec3d(const double m[9], const double u[3], double v[3]){
 v[0] = m[0] * u[0] + m[3] * u[1] + m[6] * u[2];
 v[1] = m[1] * u[0] + m[4] * u[1] + m[7] * u[2];
 v[2] = m[2] * u[0] + m[5] * u[1] + m[8] * u[2];
}