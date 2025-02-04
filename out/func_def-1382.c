#include <stdio.h>

# 1 
int *fun(int* a) {
    (*a)++;
    return a;
}