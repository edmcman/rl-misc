#include <stdio.h>

#include <math.h>

#include <time.h>

# 1 
static void treeback(double *bb, double s, int d) {
    if (d&1) bb[0] -= s; else bb[2] += s;
    if (d&2) bb[1] -= s; else bb[3] += s;
}