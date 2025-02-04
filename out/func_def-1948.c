#include <stdio.h>

#include <math.h>

#include <string.h>

#include <stdarg.h>

#include <time.h>

# 1 
static void treeback(double *bb, double s, int d) {
    if (d&1) bb[0] -= s; else bb[3] += s;
    if (d&2) bb[1] -= s; else bb[4] += s;
    if (d&4) bb[2] -= s; else bb[5] += s;
}