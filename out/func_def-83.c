#include <stdio.h>

# 1 
void swap(int *pointer)
{
    int i,j,t;
    for (i = 0; i < 3; i++)
         for (j = i; j < 3; j++)
         {
             t = *(pointer+3*i + j);
            *(pointer+3*i+j) = *(pointer+3*j+i);
            *(pointer+3*j+i) = t;
         }
}