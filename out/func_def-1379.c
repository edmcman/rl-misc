#include <stdio.h>

#include <stdlib.h>

# 1 
void sort2(int* x, int* y)
{
    if(*x > *y)
    {
        int tmp = *x;
        *x = *y;
        *y = tmp;
    }
}