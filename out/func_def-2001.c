#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
static void NA_swap(size_t *xp, size_t *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}