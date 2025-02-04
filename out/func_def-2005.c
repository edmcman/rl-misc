#include <stdio.h>

# 1 
void sum(int*p, int n, int d[])
{
  int i;
  *p = 0;
  for(i = 0; i < n; ++i)
     *p = *p + d[i];
}