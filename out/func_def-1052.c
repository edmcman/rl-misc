#include <stdio.h>

#include <stdlib.h>

# 1 
void swap(int *a, int *b) {
  *b = *b - *a;
  *a = *a + *b ;
  *b = -(*b - *a) ;
}