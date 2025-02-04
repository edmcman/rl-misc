#include <float.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
static void daxpy1(int n, double da, const double dx[], double dy[])
{
    int i;
    for (i = 0; i < n; i++) {
        dy[i] += da * dx[i];
    }
}