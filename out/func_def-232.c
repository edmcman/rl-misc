#include <stdlib.h>

#include <stdio.h>

# 1 
static void ascending2(int *a, int *b)
{
 int temp = *a;
 if (*a > *b)
 {
  *a = *b;
  *b = temp;
 }
}