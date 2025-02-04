#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

# 1 
void troca_valores(int matriz[4][4])
{
    int i;
    int v[4];
    for(i=0;i<4;i++){
        v[i]=matriz[0][i];
        matriz[0][i]=matriz[3][i];
        matriz[3][i]=v[i];
    }
}