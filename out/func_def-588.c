#include <math.h>

#include <string.h>

#include <stdlib.h>

# 1 
void Mat4_RotateZ_SinCos(float mat[16], float sina, float cosa)
{
    float R[9];

    R[0] = mat[0] * cosa + mat[4] * sina;
    R[1] = mat[1] * cosa + mat[5] * sina;
    R[2] = mat[2] * cosa + mat[6] * sina;

    R[3] =-mat[0] * sina + mat[4] * cosa;
    R[4] =-mat[1] * sina + mat[5] * cosa;
    R[5] =-mat[2] * sina + mat[6] * cosa;

    R[6] = mat[8];
    R[7] = mat[9];
    R[8] = mat[10];

    {(mat)[0] = (R)[0]; (mat)[1] = (R)[1]; (mat)[2] = (R)[2];};
    {(mat+4)[0] = (R+3)[0]; (mat+4)[1] = (R+3)[1]; (mat+4)[2] = (R+3)[2];};
    {(mat+8)[0] = (R+6)[0]; (mat+8)[1] = (R+6)[1]; (mat+8)[2] = (R+6)[2];};
}