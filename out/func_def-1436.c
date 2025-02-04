#include <stdio.h>

# 1 
void swap(int *a, int *b) {
  int t;
  t = *b;
  *b = *a;
  *a = t;
  return;
}