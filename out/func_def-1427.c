#include <stdio.h>

#include <math.h>

# 1 
void subtr(int n1, int d1, int n2, int d2, int *r1, int *r2) {
    *r1 = (n1*d2 - n2*d1);
    *r2 = (d1*d2);
}