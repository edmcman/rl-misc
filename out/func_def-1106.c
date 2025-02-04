#include <stdio.h>

# 1 
void swapminusint( int *a, int *b ) {
  *a -= *b;
  *b += *a;
  *a = (*b - *a);
}