#include <stdio.h>

# 1 
static void mul_z_poly (int src[])
{
 int i;
 for (i = (10*2)-1; i > 0; i--) src[i] = src[i-1];
 src[0] = 0;
}