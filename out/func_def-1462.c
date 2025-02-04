#include <math.h>

#include <stdint.h>

# 1 
void QuaternionToDCM(const float q[4], float dcm[3][3])
{
 dcm[0][0] = q[0] * q[0] + q[1] * q[1] - q[2] * q[2] - q[3] * q[3];
 dcm[0][1] = 2 * (q[1] * q[2] + q[0] * q[3]);
 dcm[0][2] = 2 * (q[1] * q[3] - q[0] * q[2]);
 dcm[1][0] = 2 * (q[1] * q[2] - q[0] * q[3]);
 dcm[1][1] = q[0] * q[0] - q[1] * q[1] + q[2] * q[2] - q[3] * q[3];
 dcm[1][2] = 2 * (q[2] * q[3] + q[0] * q[1]);
 dcm[2][0] = 2 * (q[1] * q[3] + q[0] * q[2]);
 dcm[2][1] = 2 * (q[2] * q[3] - q[0] * q[1]);
 dcm[2][2] = q[0] * q[0] - q[1] * q[1] - q[2] * q[2] + q[3] * q[3];
}