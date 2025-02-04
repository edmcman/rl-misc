#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

# 1 
void swap_double( double *pd )
{
  unsigned char t;
  unsigned char *pc;

  pc = (unsigned char *)pd;

  t = pc[0];
  pc[0] = pc[7];
  pc[7] = t;

  t = pc[1];
  pc[1] = pc[6];
  pc[6] = t;

  t = pc[2];
  pc[2] = pc[5];
  pc[5] = t;

  t = pc[3];
  pc[3] = pc[4];
  pc[4] = t;

}