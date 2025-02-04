#include <stdio.h>

#include <errno.h>

#include <stdlib.h>

#include <string.h>

#include <assert.h>

#include <limits.h>

# 1 
static void swap(unsigned int *a, unsigned int *b)
{
    unsigned int x;

    x = *a;
    *a = *b;
    *b = x;
}