#include <stdlib.h>

#include <stdio.h>

#include <math.h>

# 1 
double vectors_inner_productf(int n, float *vector1, float *vector2)
{
    int i;
    double result = 0;
    for (i = 0; i < n; i++) {
 result += vector1[i] * vector2[i];
    }

    return result;
}