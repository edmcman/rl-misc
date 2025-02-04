#include <stdio.h>

#include <stdlib.h>

# 1 
void swap_numbers(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}