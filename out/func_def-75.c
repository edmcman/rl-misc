#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

# 1 
void proc(unsigned int * d, unsigned int a, unsigned int len) {
  unsigned int start = 0;
  unsigned int end = len - 1;
  unsigned int middle;

  while (end > start) {
    middle = (start + end) / 2;
    if (d[middle] < a) {
      start = middle + 1;
    }
    else {
      end = middle;
    }
  }

  d[end] = a;
}