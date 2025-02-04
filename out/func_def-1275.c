#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

#include <strings.h>

#include <assert.h>

# 1 
void swap_ival (int *a, int *b)
{
 int t = *a;
 *a = *b;
 *b = t;
}