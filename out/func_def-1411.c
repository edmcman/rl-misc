#include <math.h>

#include <float.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
void cov(int n, double *x, double *y, double *out){
    int k;
    double xmean, ymean, tmp, N;

    N = n;

    xmean = 0;
    ymean = 0;
    for (k=0; k<n; k++){
        xmean += x[k];
        ymean += y[k];
    }
    xmean = xmean/n;
    ymean = ymean/n;

    tmp = 0;
    for (k=0; k<n; k++)
        tmp += (x[k] - xmean) * (y[k] - ymean);
    tmp = tmp/N;
    *out = tmp;
}