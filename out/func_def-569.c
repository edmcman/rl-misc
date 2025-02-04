#include <stdio.h>

#include <stdlib.h>

# 1 
void change_arrays(int **array1, int **array2) {
  int *pointer;
  pointer = *array2;
  *array2 = *array1;
  *array1 = pointer;
}