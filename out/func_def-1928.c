#include <stdio.h>

#include <string.h>

# 1 
int exchange(int *xp, int y) {
    int x = *xp;
    *xp = y;
    return x;
}