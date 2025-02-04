#include <stdio.h>

#include <math.h>

# 1 
void int_to_rgb(int value, int *r, int *g, int *b)
{
    *r = (value >> 16) & 0xff;
    *g = (value >> 8) & 0xff;
    *b = (value & 0xff);
}