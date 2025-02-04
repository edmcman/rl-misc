#include <stdlib.h>

#include <unistd.h>

#include <limits.h>

#include <errno.h>

#include <math.h>

#include <stdio.h>

#include <assert.h>

#include <string.h> // for strcmp

#include <sys/time.h>

# 1 
void swap_i(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}