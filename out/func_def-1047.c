#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <time.h>

#include <sys/timeb.h>

# 1 
int find_pos(float *vec,float value,int vec_length)
{


  int value_pos;
  int i;

  if (value>=vec[vec_length]) {
    value_pos=vec_length;
  } else {
    i=1;
    value_pos=vec_length;
    while (i<=vec_length) {
      if (vec[i]>=value) {
 value_pos=i-1;
 i=vec_length+1;
      }
      i++;
    }
  }
  return value_pos;

}