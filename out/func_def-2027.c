#include <stdio.h>

#include <float.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
void mvmul(double v[3], double m[3][3], double r[3]){
    double t[3];
    t[0] = m[0][0]*v[0] + m[0][1]*v[1] + m[0][2]*v[2];
    t[1] = m[1][0]*v[0] + m[1][1]*v[1] + m[1][2]*v[2];
    t[2] = m[2][0]*v[0] + m[2][1]*v[1] + m[2][2]*v[2];
    r[0] = t[0];
    r[1] = t[1];
    r[2] = t[2];
}