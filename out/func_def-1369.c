#include <stdlib.h>

#include <stdint.h>

#include <string.h>

#include <math.h>

#include <limits.h>

#include <pthread.h>

# 1 
static int mean2(int a, int b, int white, int* err)
{
    if (a >= white || b >= white)
    {
        if (err) *err = 10000000;
        return white;
    }

    int m = (a + b) / 2;

    if (err)
        *err = ((a - b) > 0 ? (a - b) : -(a - b));

    return m;
}