#include <stdio.h>

# 1 
void swap(int* x,int* y)
{
    (*x)=(*x)+(*y);
    (*y)=(*x)-(*y);
    (*x)=(*x)-(*y);
    return;
}