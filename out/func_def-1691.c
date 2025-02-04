#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

# 1 
void swap_short( unsigned short *ps )
{
  unsigned char t;
  unsigned char *pc;

  pc = ( unsigned char *)ps;
  t = pc[0];
  pc[0] = pc[1];
  pc[1] = t;
}