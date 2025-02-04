#include <stdio.h>

# 1 
void boundaries(int n, int* lo, int* hi)
{
    *hi = n >> 1;
    *lo = n%3 ? n/3 + 1 : n/3;
}