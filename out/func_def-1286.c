#include <math.h>

#include <stdbool.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
void troca(double *x, double *y){
    double aux;
    aux = *x;
    *x = *y;
    *y = aux;
}