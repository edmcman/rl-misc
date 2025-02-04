#include <math.h>

#include <string.h>

#include <stdlib.h>

# 1 
void Mat4_RotateY_SinCos(float mat[16], float sina, float cosa)
{
    float R[9];

    R[0] = mat[0] * cosa - mat[8] * sina;
    R[1] = mat[1] * cosa - mat[9] * sina;
    R[2] = mat[2] * cosa - mat[10] * sina;

    R[3] = mat[4];
    R[4] = mat[5];
    R[5] = mat[6];

    R[6] = mat[0] * sina + mat[8] * cosa;
    R[7] = mat[1] * sina + mat[9] * cosa;
    R[8] = mat[2] * sina + mat[10] * cosa;

    {(mat)[0] = (R)[0]; (mat)[1] = (R)[1]; (mat)[2] = (R)[2];};
    {(mat+4)[0] = (R+3)[0]; (mat+4)[1] = (R+3)[1]; (mat+4)[2] = (R+3)[2];};
    {(mat+8)[0] = (R+6)[0]; (mat+8)[1] = (R+6)[1]; (mat+8)[2] = (R+6)[2];};
}