#include <stdio.h>

#include <string.h>

#include <math.h>

#include <ctype.h>

#include <stdlib.h>

# 1 
void bn_lshift(unsigned long *bn, int shift, int or_val)
{
    int i;
    unsigned int v;
    for(i = 0; i < 2; i++) {
        v = bn[i];
        bn[i] = (v << shift) | or_val;
        or_val = v >> (32 - shift);
    }
}