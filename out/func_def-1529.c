#include <stdio.h>

# 1 
char *read_sign(char *s, int *sign)
{
  if (*s == '-')
    {
      *sign = -1;
      return s + 1;
    }
  else
    {
      *sign = 1;
      return s;
    }
}