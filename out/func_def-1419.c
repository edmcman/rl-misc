#include <stdio.h>

#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <unistd.h>

#include <fcntl.h>

#include <time.h>

#include <sys/types.h>

# 1 
void mult21(float A[2][2], float b[2], float x[2])
{
x[0] = A[0][0]*b[0]+A[0][1]*b[1];
x[1] = A[1][0]*b[0]+A[1][1]*b[1];
}