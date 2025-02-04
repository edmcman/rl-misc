#include <math.h>

# 1 
void eulerWx(double Wx[3][3],double p,double q,double r)
{
 Wx[0][0] = 0;
 Wx[0][1] = -r;
 Wx[0][2] = q;

 Wx[1][0] = r;
 Wx[1][1] = 0;
 Wx[1][2] = -p;

 Wx[2][0] = -q;
 Wx[2][1] = p;
 Wx[2][2] = 0;
}