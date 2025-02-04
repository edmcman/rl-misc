#include <stdio.h>

#include <stdlib.h>

#include <time.h>

# 1 
void swap(int *x, int *y)
{
 int tmp;

 tmp = *x;
 *x = *y;
 *y = tmp;
}