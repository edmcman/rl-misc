#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void reset(double e[], double f[]) {
  int i;
  for (i = 0; i < 14; i++) {
    e[i] = 0;
    f[i] = 0;
  }
}