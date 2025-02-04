#include <stdio.h>

# 1 
void swap(int **r, int **s)
{
    int *t;
    t = *r;
    *r = *s;
    *s = t;
}