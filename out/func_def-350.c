#include <stdio.h>

#include <stdlib.h>

# 1 
void addto (int src[25], int v[25])
  {
    int i;
    for (i=0; i<25; i++) {
      src[i] = (src[i] + v[i]) %2 ;
    }
  }