#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
void g2_sort2_i(int *a, int *b)
{
    if(*a>*b) {
 int t=*a;
 *a=*b; *b=t;
    }
}