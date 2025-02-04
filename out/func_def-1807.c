#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

# 1 
bool adicionaElemento(int v[], int elem, int *tam){

    if(*tam <20){
        tam++;
        v[*tam-1]=elem;
        return true;
    }
    else
        return false;
}