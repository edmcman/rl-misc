#include <stdlib.h>

#include <math.h>

#include <stdio.h>

# 1 
float ran3 (long int *idum)
{
  static int inext, inextp;
  static long ma[56];
  static int iff=0;
  long mj, mk;
  int i,ii,k;

  if (*idum < 0 || iff == 0) {

    iff=1;
    mj = 161803398 - (*idum < 0 ? -*idum : *idum);
    mj %= 1000000000;
    ma[55] = mj;
    mk = 1;
    for (i = 1; i <= 54; i++) {
      ii = (21*i) % 55;
      ma[ii] = mk;
      mk = mj - mk;
      if (mk < 0)
 mk += 1000000000;
      mj = ma[ii];
    }
    for (k = 1; k <= 4; k++) {
      for (i = 1; i <= 55; i++) {
 ma[i] -= ma[1+(i+30) % 55];
 if (ma[i] < 0)
   ma[i] += 1000000000;
      }
    }
    inext = 0;
    inextp = 31;
    *idum = 1;
  }


  if (++inext == 56)
    inext = 1;
  if (++inextp == 56)
    inextp = 1;
  mj = ma[inext] - ma[inextp];
  if (mj < 0)
    mj += 1000000000;
  ma[inext] = mj;
  return mj*(1.0/1000000000);
}