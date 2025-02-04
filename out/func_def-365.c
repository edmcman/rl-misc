#include <stdio.h>

#include <float.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
void mreflect(double axis[3], double m[3][3]){

    m[0][0] = 1 - 2*(((axis[0])*(axis[0])));
    m[1][1] = 1 - 2*(((axis[1])*(axis[1])));
    m[2][2] = 1 - 2*(((axis[2])*(axis[2])));
    m[0][1] = m[1][0] = -2*axis[0]*axis[1];
    m[0][2] = m[2][0] = -2*axis[0]*axis[2];
    m[1][2] = m[2][1] = -2*axis[1]*axis[2];

}