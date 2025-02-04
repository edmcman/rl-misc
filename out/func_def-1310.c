#include <stdio.h>

# 1 
void bitmap_set(unsigned long *map, unsigned int start, int len)
{
 unsigned long *p = map + ((start) / 32);
 const unsigned int size = start + len;
 int bits_to_set = 32 - (start % 32);
 unsigned long mask_to_set = (~0UL << ((start) & (32 - 1)));

 while (len - bits_to_set >= 0) {
  *p |= mask_to_set;
  len -= bits_to_set;
  bits_to_set = 32;
  mask_to_set = ~0UL;
  p++;
 }
 if (len) {
  mask_to_set &= (~0UL >> (-(size) & (32 - 1)));
  *p |= mask_to_set;
 }
}