#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
void se3ToVec(double se3Mat[4][4],double V[6])
{
 V[0] = se3Mat[2][1];
 V[1] = se3Mat[0][2];
 V[2] = se3Mat[1][0];
 V[3] = se3Mat[0][3];
 V[4] = se3Mat[1][3];
 V[5] = se3Mat[2][3];
 return;
}