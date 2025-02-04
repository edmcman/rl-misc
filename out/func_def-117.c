#include <stdlib.h>

#include <stdio.h>

# 1 
void getnext(int *row, int *col, int* nrow, int* ncol){
    if(*col ==8){
        *ncol = 0;
        *nrow = (*row)+1;
    }
    else{
        *nrow = *row;
        *ncol = (*col) +1;
    }
}