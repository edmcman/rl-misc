#include <math.h>

#include <string.h>

#include <stdlib.h>

# 1 
void Mat4_Scale(float mat[16], float x, float y, float z)
{
    mat[ 0] *= x;
    mat[ 1] *= x;
    mat[ 2] *= x;

    mat[ 4] *= y;
    mat[ 5] *= y;
    mat[ 6] *= y;

    mat[ 8] *= z;
    mat[ 9] *= z;
    mat[ 10] *= z;
}