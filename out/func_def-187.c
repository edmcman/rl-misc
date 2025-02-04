#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
int matfCalcCross(float *v1, float *v2, float *vr)
{
        vr[0]=v1[1]*v2[2]-v2[1]*v1[2];
        vr[1]=v1[2]*v2[0]-v2[2]*v1[0];
        vr[2]=v1[0]*v2[1]-v2[0]*v1[1];
 return 0;
}