#include <math.h>

# 1 
int solve1(double *coeff, double *roots)
{
    double a, b;

    a = coeff[1], b = coeff[0];
    if ((((a) < 1E-7) && ((a) > -1E-7))) {
 if ((((b) < 1E-7) && ((b) > -1E-7)))
     return 4;
 else
     return 0;
    }
    roots[0] = -b / a;
    return 1;
}