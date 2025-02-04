#include <string.h>

#include <stdlib.h>

# 1 
void finish(double *out)
{
 __asm__ volatile (
   "movapd	%%xmm1, %0\n"
   "movapd	%%xmm2, %1\n"
   : "=m" (out[0]), "=m" (out[2])
  );
}