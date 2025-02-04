#include <stdio.h>

#include <stdlib.h>

# 1 
int itoa_fn(int n, char *s)
{
  if (n > 0)
    {
      int len = 1;
      if (n / 10 > 0)
        len += itoa_fn(n / 10, s);
      s[len - 1] = (n % 10) + '0';
      return len;
    }
  return 0;
}