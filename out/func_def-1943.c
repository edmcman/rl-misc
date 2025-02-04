#include <math.h>

# 1 
void mult_mat_pos(float v[3], const float M[16], const float u[3])
{
    v[0] = M[0] * u[0] + M[4] * u[1] + M[8] * u[2] + M[12];
    v[1] = M[1] * u[0] + M[5] * u[1] + M[9] * u[2] + M[13];
    v[2] = M[2] * u[0] + M[6] * u[1] + M[10] * u[2] + M[14];
}