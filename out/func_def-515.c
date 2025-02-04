#include <stdio.h>

#include <stdlib.h>

# 1 
void reverse_bytes(int *p) {
  char *y = (char*) p;
  char *t;
  t = y[0];
  y[0] = y[3];
  y[3] = t;
  t = y[1];
  y[1] = y[2];
  y[2] = t;

}