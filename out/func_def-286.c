#include <time.h>

#include <stdio.h>

#include <stddef.h>

#include <stdlib.h>

#include <string.h>

# 1 
static unsigned long
namegen_rand32(unsigned long *s)
{
    unsigned long x = *s;
    x ^= x << 13;
    x ^= (x & 0xffffffffUL) >> 17;
    x ^= x << 5;
    return (*s = x) & 0xffffffffUL;
}