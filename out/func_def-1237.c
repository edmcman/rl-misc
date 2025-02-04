#include <errno.h>

#include <ctype.h>

#include <stdio.h>

#include <stdint.h>

#include <stdlib.h>

# 1 
void bitmap_clear(unsigned long *map, int start, int nr)
{
 unsigned long *p = map + ((start) / ((int)((sizeof(long) * 8))));
 const int size = start + nr;
 int bits_to_clear = ((int)((sizeof(long) * 8))) - (start % ((int)((sizeof(long) * 8))));
 unsigned long mask_to_clear = (~0UL << ((start) % ((int)((sizeof(long) * 8)))));

 while (nr - bits_to_clear >= 0) {
  *p &= ~mask_to_clear;
  nr -= bits_to_clear;
  bits_to_clear = ((int)((sizeof(long) * 8)));
  mask_to_clear = ~0UL;
  p++;
 }
 if (nr) {
  mask_to_clear &= ( ((size) % ((int)((sizeof(long) * 8)))) ? (1UL<<((size) % ((int)((sizeof(long) * 8)))))-1 : ~0UL );
  *p &= ~mask_to_clear;
 }
}