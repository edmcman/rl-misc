#include <stdio.h>

#include <stdlib.h>

# 1 
static void setGrid(int A[3], int x, int y, int z, int result[3])
{
    result[0] = A[0] + x;
    result[1] = A[1] + y;
    result[2] = A[2] + z;
}