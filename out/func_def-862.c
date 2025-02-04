#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <time.h>

# 1 
void skew_sym(double * a, double * ax){
  ax[0] = 0;
  ax[1] = -a[2];
  ax[2] = a[1];
  ax[3] = a[2];
  ax[4] = 0;
  ax[5] = -a[0];
  ax[6] = -a[1];
  ax[7] = a[0];
  ax[8] = 0;
}