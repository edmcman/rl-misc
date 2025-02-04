#include <stdio.h>

# 1 
void swapbitwise( int *a, int *b ) {
  *a ^= *b;
  *b ^= *a;
  *a ^= *b;
}