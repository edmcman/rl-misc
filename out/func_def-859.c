#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
void geom_matTvec3f(const float m[9], const float u[3], float v[3]){
 v[0] = m[0] * u[0] + m[1] * u[1] + m[2] * u[2];
 v[1] = m[3] * u[0] + m[4] * u[1] + m[5] * u[2];
 v[2] = m[6] * u[0] + m[7] * u[1] + m[8] * u[2];
}