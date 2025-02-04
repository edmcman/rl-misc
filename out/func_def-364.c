#include <stdio.h>

#include <stdlib.h>

# 1 
void swap(int *a, int *b)
{
 int temp = *b;
 *b = *a;
 *a = *b;
}