#include <stdio.h>

#include <stdlib.h>

#include <assert.h>

# 1 
int GetSymbol(int *low, int *high, int *count, int target, int nSymbols)

 {
 int n;

 *low = 0;
 for(n = 0 ; n < nSymbols ; n++)
  {
  if(*low + count[n] > target)
   break;

  *low += count[n];
  }

 *high = *low + count[n];
 return(n);
 }