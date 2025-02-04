#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void swap(int* A, int* B)
{
    int temp=*A;
    *A=*B;
    *B=temp;
    return;
}