#include <inttypes.h>

#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <tgmath.h>

#include <math.h>

#include <assert.h>

# 1 
void vec_lmsf(const float x[], float y[], int n, float error)
{
    int i;

    for (i = 0; i < n; i++)
    {

        y[i] = y[i]*0.9999f + x[i]*error;
    }
}