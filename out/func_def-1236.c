#include <stdio.h>

#include <stdlib.h>

#include <omp.h>

# 1 
void daxpy(double *x,double *y,int N,int a){
    int i;

    for(i=1;i<=N;i++)
        y[i] = a * x[i] + y[i];
}