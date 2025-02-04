#include <bits/types.h>

#include <stdio.h> 

# 1 
void strrev(char *p)
{
  char *q = p;
  while(q && *q) ++q;
  for(--q; p < q; ++p, --q) (*p^=*q, *q^=*p, *p^=*q);
}