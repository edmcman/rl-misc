#include <stdio.h>

#include <string.h>

# 1 
void set_bit(int* x, int b)
{
    *x |= (1 << b);
}