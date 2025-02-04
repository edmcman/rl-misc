#include <stdio.h>

#include <stdlib.h>

# 1 
void increment(int* n){
    int x = *n;
    int w = 1;
    while(x&w){
        x = x^w;
        w<<=1;
    }x = x^w;
    *n = x;

}