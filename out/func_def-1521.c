#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <time.h>

#include <sys/timeb.h>

# 1 
int findi(int *vec,int n_vec,int search_value,int *index)
{




  int i;
  int n;

  n=0;
  for (i=1;i<=n_vec;i++) {
    if (vec[i]==search_value) {
      n++;
      index[n]=i;
    }
  }
  return n;
}