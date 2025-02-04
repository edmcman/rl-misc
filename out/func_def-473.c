#include <assert.h>

#include <float.h>

#include <limits.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
static void
vector_positions(const int dims[3] ,
                 const int i ,
                 const int j ,
                 size_t start[4])

{
    size_t im, ip, jm, jp;

    im = (((1) > (i)) ? (1) : (i)) - 1;
    jm = (((1) > (j)) ? (1) : (j)) - 1;
    ip = (((dims[0]) < (i+1)) ? (dims[0]) : (i+1)) - 1;
    jp = (((dims[1]) < (j+1)) ? (dims[1]) : (j+1)) - 1;

    start[ 0 ] = dims[2] * (im + dims[0]*jm);
    start[ 1 ] = dims[2] * (im + dims[0]*jp);
    start[ 2 ] = dims[2] * (ip + dims[0]*jm);
    start[ 3 ] = dims[2] * (ip + dims[0]*jp);
}