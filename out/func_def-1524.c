#include <stdio.h>

#include <float.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
void vscale(double s,double v[3], double vr[3]){
    vr[0] = s*v[0];
    vr[1] = s*v[1];
    vr[2] = s*v[2];
}