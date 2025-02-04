#include <math.h>

#include <stdarg.h>

#include <stdlib.h>

#include <stdio.h>

#include <limits.h>

# 1 
void stats_int_swap(int* a, int* b) {

 int x = *a;
 *a = *b;
 *b = x;
}