#include <math.h>

# 1 
void load_mat(float M[16], const float N[16])
{
    M[0] = N[0]; M[4] = N[4]; M[8] = N[8]; M[12] = N[12];
    M[1] = N[1]; M[5] = N[5]; M[9] = N[9]; M[13] = N[13];
    M[2] = N[2]; M[6] = N[6]; M[10] = N[10]; M[14] = N[14];
    M[3] = N[3]; M[7] = N[7]; M[11] = N[11]; M[15] = N[15];
}