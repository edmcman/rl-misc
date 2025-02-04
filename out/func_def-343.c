#include <stdio.h>

#include <stdlib.h>

# 1 
void Troca(int n[], int num, int p1, int p2)
{
    int aux;

    aux = n[p1];
    n[p1] = n[p2];
    n[p2] = aux;
}