#include <stdio.h>

# 1 
void swap(int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}