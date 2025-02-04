#include <math.h> /* for log10() and floor() */

#include <stdio.h> /* for printf() */

# 1 
const char * string_to_ulong (const char *s, unsigned long *number)
{
  int c = *s;
  for (*number = 0; ((unsigned)(c - '0') <= (unsigned)('9' - '0')); *number = (((*number) << 1) + ((*number) << 3)) + (c - '0'), c = *++s);
  return s;
}