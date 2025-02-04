#include <math.h>

# 1 
void quat_multiply(float* lhs, float* rhs)
{
 float result[4];

 result[0] = (*(lhs + 0) * *(rhs + 0) - *(lhs + 1) * *(rhs + 1)
     - *(lhs + 2) * *(rhs + 2) - *(lhs + 3) * *(rhs + 3));

 result[1] = (*(lhs + 0) * *(rhs + 1) + *(lhs + 1) * *(rhs + 0)
     + *(lhs + 2) * *(rhs + 3) - *(lhs + 3) * *(rhs + 2));

 result[2] = (*(lhs + 0) * *(rhs + 2) - *(lhs + 1) * *(rhs + 3)
     + *(lhs + 2) * *(rhs + 0) + *(lhs + 3) * *(rhs + 1));

 result[3] = (*(lhs + 0) * *(rhs + 3) + *(lhs + 1) * *(rhs + 2)
     - *(lhs + 2) * *(rhs + 1) + *(lhs + 3) * *(rhs + 0));

 *lhs = result[0];
 *(lhs + 1) = result[1];
 *(lhs + 2) = result[2];
 *(lhs + 3) = result[3];
}