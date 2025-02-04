#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
void geom_matTvec4d(const double m[16], const double u[4], double v[4]){
 v[0] = m[ 0] * u[0] + m[ 1] * u[1] + m[ 2] * u[2] + m[ 3] * u[3];
 v[1] = m[ 4] * u[0] + m[ 5] * u[1] + m[ 6] * u[2] + m[ 7] * u[3];
 v[2] = m[ 8] * u[0] + m[ 9] * u[1] + m[10] * u[2] + m[11] * u[3];
 v[3] = m[12] * u[0] + m[13] * u[1] + m[14] * u[2] + m[15] * u[3];
}