#include <math.h>

# 1 
void cross(float u[3], const float v[3],
                       const float w[3])
{
    u[0] = v[1] * w[2] - v[2] * w[1];
    u[1] = v[2] * w[0] - v[0] * w[2];
    u[2] = v[0] * w[1] - v[1] * w[0];
}