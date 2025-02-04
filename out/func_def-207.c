#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
char *
outnum(char *p, int n)
{
 if (n>=10)
  p = outnum(p, n/10);
 *p++ = n%10 + '0';
 return p;
}