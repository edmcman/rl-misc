#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
static int extract_digits( float x, float *dig,
                           int *j, int *j1, int *j2, int *j3 )
{
   register int sign, k, k1, k2, k3;
   float digits;

   k = (int) x;


   if (x<0) {
      k = -k;
      x = -x;
      sign = -1;
      digits = 0.5;
   }
   else {
      sign = 1;
      digits = 0.0;
   }

   k1 = ( (int) (x * 10.0) ) % 10;
   k2 = ( (int) (x * 100.0) ) % 10;
   k3 = ( (int) (x * 1000.0) ) % 10;


   if (k>=100) {
      k1 = k2 = k3 = 0;
      digits += 3.0;
   }
   else if (k>=10) {
      k3 = 0;
      digits += 4.5;
      if (k2==0) {
         digits -= 1.0;
         if (k1==0) digits -= 1.0;
      }
   }
   else {
      digits += 4.5;
      if (k3==0) {
         digits -= 1.0;
         if (k2==0) {
            digits -= 1.0;
            if (k1==0) digits -= 1.0;
         }
      }
   }

   *j = k;
   *j1 = k1;
   *j2 = k2;
   *j3 = k3;
   if (digits<2.0)
     *dig = 2.0;
   else
     *dig = digits;

   return sign;
}