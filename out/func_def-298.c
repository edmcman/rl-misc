#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <time.h>

#include <sys/timeb.h>

# 1 
int faster_find_pos(float *vec,float value,int vec_length)
{

  int value_pos;
  int i;
  int i_inf,i_sup;

  i_inf=1;
  i_sup=vec_length;
  while ( (i_sup-i_inf)>1 ) {
    i=(i_sup+i_inf)/2;
    if (vec[i]>=value) {
      i_sup=i;
    }
    else {
      i_inf=i;
    }
  }
  value_pos=i_inf;

  return value_pos;
}