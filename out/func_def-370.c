#include <stdio.h>

# 1 
int foo(int *p, int n)
{
 *p = n;
 return n + 1;
}