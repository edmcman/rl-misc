#include <stdio.h>

#include <stdlib.h>

# 1 
int max(int a, int b, int c, int *p)
{
        if (a > b) {
                *p = 0;
                return a;
        } else {
                *p = c;
                return b;
        }
}