#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <string.h>

# 1 
void swap(int * a, int * b)
{
  int s = * a;
  * a = * b;
  * b = s;
}