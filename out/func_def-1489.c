#include <math.h> /* for log10() and floor() */

#include <stdio.h> /* for printf() */

# 1 
char * slong_as_radix (long number, int radix, int uc, char ibuf[65], size_t *psize)
{
  char *p, *e; long quotient; e = p = (ibuf + 65 - 1); *p = '\0'; do { if (uc) { do { quotient = number; number /= radix; *--p = "ZYXWVUTSRQPONMLKJIHGFEDCBA9876543210123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[36 - 1 + (quotient - number*radix)]; } while (number); } else { do { quotient = number; number /= radix; *--p = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz"[36 - 1 + (quotient - number*radix)]; } while (number); } if (quotient < 0) *--p = '-'; } while (0); *psize = (size_t)(e - p);
  return p;
}