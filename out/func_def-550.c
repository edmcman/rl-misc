#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <stdint.h>

#include <stdbool.h>

# 1 
void SubtBigNbr(const int *Nbr1, const int *Nbr2, int *Diff)
{
  unsigned int borrow = (unsigned int)*Nbr1 - (unsigned int)*Nbr2;
  *Diff = borrow & 0x7FFFFFFFU;

  borrow = (unsigned int)*(Nbr1+1) - (unsigned int)*(Nbr2+1) - (borrow >> 31);
  *(Diff+1) = borrow & 0x7FFFFFFFU;
}