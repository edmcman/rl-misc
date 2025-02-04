#include <stdio.h>

# 1 
void sort2(int* a, int* b)
{
  if (*a > *b)
  {
    int swap = *b;
    *b = *a;
    *a = swap;
  }
}