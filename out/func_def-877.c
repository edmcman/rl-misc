#include <math.h>

#include <string.h>

#include <stdio.h>

# 1 
void transform(double *v, double *d) {
    int t;
    for (t=0; t<3; t++) {
 v[t] = (v[t]-d[t])*d[3+t];
    }
}