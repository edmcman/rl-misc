#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
void g2_sort2_d(double *a, double *b)
{
    if(*a>*b) {
 double t=*a;
 *a=*b; *b=t;
    }
}