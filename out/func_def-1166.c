#include <stdio.h>

#include <stdlib.h>

#include <errno.h>

#include <string.h>

#include <ctype.h>

#include <math.h>

#include <time.h>

# 1 
void lswap(long *pa, long *pb)
{
    long temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}