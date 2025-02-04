#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
void VecToso3(double omg[3],double so3Mat[3][3])
{
 so3Mat[0][0] = 0.0; so3Mat[0][1] = -omg[2]; so3Mat[0][2] = omg[1];
 so3Mat[1][0] = omg[2]; so3Mat[1][1] = 0; so3Mat[1][2] = -omg[0];
 so3Mat[2][0] = -omg[1]; so3Mat[2][1] = omg[0]; so3Mat[2][2] = 0.0;
 return;
}