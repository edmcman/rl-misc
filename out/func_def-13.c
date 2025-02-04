#include <stdio.h>

#include <float.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
void vadd(double v1[3],double v2[3], double vr[3]){
    vr[0] = v1[0] + v2[0];
    vr[1] = v1[1] + v2[1];
    vr[2] = v1[2] + v2[2];
}