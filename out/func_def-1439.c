#include <stdio.h>

#include <stdlib.h>

# 1 
void potencia(double *base, int exponente){
    int i = 0;
    double total = 1;
    for (i=0;i<exponente;i++){
        total = total * (*base);
    }
    (*base) = total;
    return;
}