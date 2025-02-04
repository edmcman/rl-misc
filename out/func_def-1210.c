#include <stdio.h>

#include <stdlib.h>

# 1 
double dincr(double *p, double v) {
    double x = *p;
    *p = x + v;
    return x;
}