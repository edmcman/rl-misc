#include <ctype.h>

#include <locale.h>

#include <math.h>

#include <stdio.h>

#include <string.h>

# 1 
void wcsutil_setBit(int nelem, const int *sel, int bits, int *array)

{
  int *arrp;

  if (bits == 0 || nelem <= 0) return;

  if (sel == 0x0) {

    for (arrp = array; arrp < array + nelem; arrp++) {
      *arrp |= bits;
    }

  } else {

    for (arrp = array; arrp < array + nelem; arrp++) {
      if (*(sel++)) *arrp |= bits;
    }
  }
}