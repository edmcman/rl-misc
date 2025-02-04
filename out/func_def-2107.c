#include <math.h>

#include <memory.h>

# 1 
void vec3Multiply(float* vec, const float* lhs, const float* rhs)
{
 vec[0] = lhs[0] * rhs[0];
 vec[1] = lhs[1] * rhs[1];
 vec[2] = lhs[2] * rhs[2];
}