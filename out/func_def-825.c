#include <stdio.h>

# 1 
void setswap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}