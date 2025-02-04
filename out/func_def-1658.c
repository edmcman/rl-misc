#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
float geom_dot4f(const float a[4], const float b[4]){
 return a[0]*b[0] + a[1]*b[1] + a[2]*b[2] + a[3]*b[3];
}