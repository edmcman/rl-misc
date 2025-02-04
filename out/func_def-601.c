#include <stdio.h>

#include <string.h>

#include <math.h>

# 1 
void getRotationMatrixFromQuartenion(float q[4], float m[4][4]){
    float w = q[0];
    float x = q[1];
    float y = q[2];
    float z = q[3];

    float y2 = y*y;
    float x2 = x*x;
    float z2 = z*z;

    m[0][0] = 1-2*y2-2*z2;
    m[0][1] = 2*x*y-2*w*z;
    m[0][2] = 2*x*z+2*w*y;
    m[0][3] = 0;

    m[1][0] = 2*x*y+2*w*z;
    m[1][1] = 1-2*x2-2*z2;
    m[1][2] = 2*y*z-2*w*x;
    m[1][3] = 0;

    m[2][0] = 2*x*z-2*w*y;
    m[2][1] = 2*y*z+2*w*x;
    m[2][2] = 1-2*x2-2*y2;
    m[2][3] = 0;

    m[3][0] = 0;
    m[3][1] = 0;
    m[3][2] = 0;
    m[3][3] = 1;
}