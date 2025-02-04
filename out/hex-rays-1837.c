#include <math.h>

# 1 
#include "defs.h"
double  func0(double x, int *exponent)
{
int v4; // [rsp+1Ch] [rbp-4h]

v4 = 0;
while ( x > 1.0 )
{
x = x / 2.0;
++v4;
}
*exponent = v4;
return x;
}