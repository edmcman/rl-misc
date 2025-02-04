#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <assert.h>

#include <ctype.h>

#include <math.h>

# 1 
static int find_overlaps(int w, int h, int placement, int *set)
{
    int x, y, n;

    n = 0;

    x = placement / 2;
    y = x / w;
    x %= w;

    if (placement & 1) {



        if (x > 0)
            set[n++] = placement-2;
        if (y > 0)
            set[n++] = placement-2*w-1;
        if (y+1 < h)
            set[n++] = placement-1;
        if (x+2 < w)
            set[n++] = placement+2;
        if (y > 0)
            set[n++] = placement-2*w+2-1;
        if (y+1 < h)
            set[n++] = placement+2-1;
    } else {



        if (y > 0)
            set[n++] = placement-2*w;
        if (x > 0)
            set[n++] = placement-2+1;
        if (x+1 < w)
            set[n++] = placement+1;
        if (y+2 < h)
            set[n++] = placement+2*w;
        if (x > 0)
            set[n++] = placement-2+2*w+1;
        if (x+1 < w)
            set[n++] = placement+2*w+1;
    }

    return n;
}