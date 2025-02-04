#include <ctype.h>

#include <locale.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void wcsutil_setBit(int nelem, const int *sel, int bits, int *array)

{
  if (bits == 0 || nelem <= 0) return;

  if (sel == 0x0) {

    for (int *arrp = array; arrp < array + nelem; arrp++) {
      *arrp |= bits;
    }

  } else {

    for (int *arrp = array; arrp < array + nelem; arrp++) {
      if (*(sel++)) *arrp |= bits;
    }
  }
}