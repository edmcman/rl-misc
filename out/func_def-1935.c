#include <math.h> /* for log10() and floor() */

#include <stdio.h> /* for printf() */

# 1 
char * usize_as_string (size_t number, char ibuf[65], size_t *psize)
{
  char *p, *e; size_t quotient; e = p = (ibuf + 65 - 1); *p = '\0'; do { quotient = number; number /= 10; *--p = (char)(quotient - (((number) << 1) + ((number) << 3))) + '0'; } while (number); *psize = (size_t)(e - p);
  return p;
}