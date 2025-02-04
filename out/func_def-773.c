#include <time.h>

#include <stdlib.h>

#include <math.h>

# 1 
float ran1(long*idum, int reset) {
  int j;
  long k;
  static long iy=0;
  static long iv[32];
  float temp;
  if (reset) {
    iy = 0;
  }
  if (*idum<=0||!iy) {
    if (-(*idum)<1)*idum=1;
    else *idum=-(*idum);
    for (j=32 +7; j>=0; j--) {
      k = (*idum)/127773;
      *idum=16807*(*idum-k*127773)-2836*k;
      if (*idum<0)*idum+=2147483647;
      if (j<32)iv[j]=*idum;
    }
    iy = iv[0];
  }
  k = (*idum)/127773;
  *idum = 16807*(*idum-k*127773)-2836*k;
  if (*idum<0)*idum += 2147483647;
  j = iy/(1+(2147483647 -1)/32);
  iy = iv[j];
  iv[j] = *idum;
  if ((temp=(1.0/2147483647)*iy)> (1.0-1.2e-7)) return (1.0-1.2e-7);
  else return temp;
}