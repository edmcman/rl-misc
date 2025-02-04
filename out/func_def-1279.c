#include <stdio.h>

# 1 
void add_polys (int dst[], int src[])
{
 int i;
 for (i = 0; i < (10*2); i++) dst[i] ^= src[i];
}