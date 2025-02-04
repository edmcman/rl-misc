#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <stdint.h>

#include <stdbool.h>

# 1 
void AddBigNbr(const int *Nbr1, const int *Nbr2, int *Sum)
{
  unsigned int carry = (unsigned int)*Nbr1 + (unsigned int)*Nbr2;
  *Sum = carry & 0x7FFFFFFFU;
  carry = (carry >> 31) + *(Nbr1+1) + *(Nbr2+1);
  *(Sum+1) = carry & 0x7FFFFFFFU;
}