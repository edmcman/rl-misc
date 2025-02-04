#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
void geom_matinv2f(float m[4]){
 float d = 1.f/(m[0]*m[3] - m[1]*m[2]);
 float t = m[0];
 m[0] = d*m[3];
 m[1] = -d*m[1];
 m[2] = -d*m[2];
 m[3] = d*t;
}