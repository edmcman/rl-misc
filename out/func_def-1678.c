#include <stdio.h>

#include <stdlib.h>

# 1 
void exchange_ptr(int *a, int *b)
{
    int i = *a;
    *a = *b;
    *b = i;
}