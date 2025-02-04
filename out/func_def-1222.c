#include <math.h>

#include <float.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <float.h>

#include <stdint.h>

# 1 
static size_t choose(float *a, float *b, size_t src1, size_t src2)
{
 return (*b >= *a) ? src2 : src1;
}