#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
float geom_dot3f(const float a[3], const float b[3]){
 return a[0]*b[0] + a[1]*b[1] + a[2]*b[2];
}