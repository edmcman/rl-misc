#include <stdio.h>

# 1 
void add(int *a, int*b, int *c){
  int tid = 0;
  while (tid < 10) {
    c[tid] = a[tid] + b[tid];
    tid += 1;
  }
}