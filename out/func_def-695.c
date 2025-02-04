#include <math.h>

#include <stdlib.h>

#include <fcntl.h>

#include <unistd.h>

#include <stdio.h>

#include <string.h>

# 1 
float dotproduct(float grad[], float x, float y)
{
 return grad[0] * x + grad[1] * y;
}