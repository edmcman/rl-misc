#include <stdio.h>

#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <unistd.h>

#include <fcntl.h>

#include <time.h>

#include <sys/types.h>

# 1 
void add21(float a[2], float b[2], float c[2])
{
c[0] = a[0] + b[0];
c[1] = a[1] + b[1];
}