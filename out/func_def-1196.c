#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

# 1 
void swap_ulong( unsigned long *pi )
{
  unsigned char t;
  unsigned char *pc;

  pc = (unsigned char *)pi;

  t = pc[0];
  pc[0] = pc[3];
  pc[3] = t;

  t = pc[1];
  pc[1] = pc[2];
  pc[2] = t;
}