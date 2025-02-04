#include <stdio.h>

#include <stdbool.h>

#include <math.h>

# 1 
void simple_sort_swapper(double* one, double* two) {
    double aux = *one;
    *one = *two;
    *two = aux;
}