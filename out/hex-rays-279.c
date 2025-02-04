#include <stdio.h>

#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <unistd.h>

#include <fcntl.h>

#include <time.h>

#include <sys/types.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float *result; // rax

*a3 = *a2 + *a1;
result = a3 + 1;
a3[1] = a2[1] + a1[1];
return result;
}