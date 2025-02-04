#include <stdlib.h>

#include <stdio.h>

#include <assert.h>

# 1 
void swap (int* first, int* second) {
   int swap = *first;
   *first = *second;
   *second = swap;
}