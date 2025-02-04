#include <math.h> /* for log10() and floor() */

#include <stdio.h> /* for printf() */

# 1 
char * ulong_as_alpha (unsigned long number, int uc, char ibuf[65], size_t *psize)
{
  char *p, *e; unsigned long quotient; e = p = (ibuf + 65 - 1); *p = '\0'; if (uc) { while (number > 0) { quotient = --number; number /= 26; *--p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[quotient % 26]; }; } else { while (number > 0) { quotient = --number; number /= 26; *--p = "abcdefghijklmnopqrstuvwxyz"[quotient % 26]; }; } *psize = (size_t)(e - p);
  return p;
}