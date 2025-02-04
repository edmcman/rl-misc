#include <stdlib.h>

#include <math.h>

#include <stdbool.h>

#include <stdio.h>

# 1 
static void _vect(double* v1, double* v2, double* res) {




    res[0] = v1[1]*v2[2] - v1[2]*v2[1];
    res[1] = v1[2]*v2[0] - v1[0]*v2[2];
    res[2] = v1[0]*v2[1] - v1[1]*v2[0];
    return;
}