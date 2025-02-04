#include <math.h>

# 1 
float
QuaternionMagnitude(float pfQIn[4])
{
    float fSumSq;





    fSumSq = ((pfQIn[0] * pfQIn[0]) + (pfQIn[1] * pfQIn[1]) +
              (pfQIn[2] * pfQIn[2]) + (pfQIn[3] * pfQIn[3]));

    return(fSumSq);
}