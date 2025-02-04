#include <stdio.h>

#include <float.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
void minv(double M[3][3], double I[3][3]){

    double d0 = M[1][1] * M[2][2] - M[2][1] * M[1][2];
    double d1 = M[1][0] * M[2][2] - M[1][2] * M[2][0];
    double d2 = M[1][0] * M[2][1] - M[1][1] * M[2][0];
    double det = (M[0][0]*d0 - M[0][1]*d1 + M[0][2]*d2);

    I[0][0] = d0/det;
    I[0][1] = (M[0][2] * M[2][1] - M[0][1] * M[2][2])/det;
    I[0][2] = (M[0][1] * M[1][2] - M[0][2] * M[1][1])/det;
    I[1][0] = -d1/det;
    I[1][1] = (M[0][0] * M[2][2] - M[0][2] * M[2][0])/det;
    I[1][2] = (M[1][0] * M[0][2] - M[0][0] * M[1][2])/det;
    I[2][0] = d2/det;
    I[2][1] = (M[2][0] * M[0][1] - M[0][0] * M[2][1])/det;
    I[2][2] = (M[0][0] * M[1][1] - M[1][0] * M[0][1])/det;


}