#include <stdio.h>

# 1 
int twiddle2(int *xp, int *yp) {
    *xp += 2 * (*yp);
    return *xp;
}