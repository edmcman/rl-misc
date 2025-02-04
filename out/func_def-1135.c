#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

# 1 
void unset_bit(int* x, int b)
{
    *x &= ~(1 << b);
}