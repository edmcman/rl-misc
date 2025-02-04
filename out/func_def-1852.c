#include <stdio.h>

#include <string.h>

#include <math.h>

#include <ctype.h>

#include <stdlib.h>

# 1 
void bn_zero(unsigned long *bn)
{
    int i;
    for(i = 0; i < 2; i++) {
        bn[i] = 0;
    }
}