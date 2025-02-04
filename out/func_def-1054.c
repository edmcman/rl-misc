#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

# 1 
void flip2( const unsigned short *src, unsigned short *dest, size_t n )
{
   size_t i;

   for (i=0;i<n;i++) {
      unsigned short tmp = src[i];
      dest[i] = (((unsigned short) (tmp & 0xff00)) >> 8 | (tmp & 0x00ff) << 8);
   }
}