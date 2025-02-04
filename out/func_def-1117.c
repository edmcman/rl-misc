#include <stdio.h>

#include <math.h>

# 1 
void genScaleMatrix(double scale, double m[3][3])
{
    m[0][0] = scale; m[0][1] = 0.; m[0][2] = 0.;
    m[1][0] = 0.; m[1][1] = scale; m[1][2] = 0.;
    m[2][0] = 0.; m[2][1] = 0.; m[2][2] = scale;
}