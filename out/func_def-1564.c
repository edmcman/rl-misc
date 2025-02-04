#include <stdio.h>

#include <stdlib.h>

# 1 
void troca(float *a, float *b)
{
    float c;
    c = *a;
    *a = *b;
    *b = c;

}