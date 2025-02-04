#include <stdio.h>

# 1 
void delcharfun (char str[], char ch)
{
 char *p, *t;

 for (p = str; *p;)
  if (*p == ch)
   for (t = p; *t; t++)
    *t = *(t + 1);
  else p++;
}