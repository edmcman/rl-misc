#include <stdio.h>

# 1 
void normalizeFloat(int *exponent, int *magnitude) {
   if (*magnitude == 0) {
   *exponent = 0;
   return;
   }
   int sign = 0;
   if (*magnitude < 0) {
   sign = 1;
   *magnitude = -*magnitude;
   }

   while ((*magnitude & ~0x007FFFFF) == 0) {
      *magnitude <<= 1;
      (*exponent)--;



   }
   while (*magnitude & (~0x007FFFFF << 1)) {
      *magnitude >>= 1;
      (*exponent)++;

   }
   if (sign) {
   *magnitude = -*magnitude;
   }
}