#include <math.h>

# 1 
float resonz(float sig, float *a)
{
      float z;
      z=a[1]*(sig-a[0]*a[4])+a[2]*a[5]+a[3]*a[6];
      a[4]=a[8];
      a[8]=sig;
      a[6]=a[5];
      a[5]=z;
      return(z);
}