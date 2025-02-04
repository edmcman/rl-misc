#include <stdio.h>

#include <stdlib.h>

#include <time.h>

# 1 
void swap(int *a,int *b)
{
    int swap;
    swap=*a;
    *a=*b;
    *b=swap;
}