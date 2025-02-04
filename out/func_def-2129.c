#include <math.h>

# 1 
void problem(double *x, double *y, double *dy)
{
 const double omega = 1.F;
 dy[0] = y[1];
 dy[1] = -omega * omega * y[0];
}