#include <stdio.h>

# 1 
void sweap_by_address(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}