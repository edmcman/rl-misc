#include <math.h>

# 1 
void load_xlt_mat(float M[16], float x, float y, float z)
{
    M[0] = 1; M[4] = 0; M[8] = 0; M[12] = x;
    M[1] = 0; M[5] = 1; M[9] = 0; M[13] = y;
    M[2] = 0; M[6] = 0; M[10] = 1; M[14] = z;
    M[3] = 0; M[7] = 0; M[11] = 0; M[15] = 1;
}