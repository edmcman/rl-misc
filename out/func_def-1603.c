#include <stdio.h>

#include <stdlib.h>

# 1 
int func(int n, int * count)
{
  (* count) ++;
  if ((n == 0) || (n == 1))
    {
      return 1;
    }
  int val = 0;
  int a = func(n - 1, count);
  int b = func(n / 2, count);
  val += a + b;
  return val;
}