#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
void divMod(int n, int d, int* result, int* remainder)







{
    if (d == 0)
    {
        *result = 0;
        *remainder = 0;
    }
    else
    {
        *result = n/d;
        *remainder = n - d*(*result);
    }
}