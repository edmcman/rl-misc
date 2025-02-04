#include <stdio.h>

#include <time.h>

#include <stdlib.h>

# 1 
void swap(int *a, int *b) {

    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;



}