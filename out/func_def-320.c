#include <assert.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <fcntl.h>

#include <sys/types.h>

#include <aio.h>

# 1 
int *intersect_lists (int *A, int *Ae, int *B, int *Be, int *D, int *De) {
  int x, *C = B;

  while (A < Ae) {
    x = *A++;
    if (x > 0) {
      while (B < Be && (unsigned) *B > (unsigned) x) B++;
      if (B == Be) continue;
      if (*B == x) {
 if (D < De) *D++ = x;
      }
    } else {
      while (C < Be && (unsigned) *C < (unsigned) x) C++;
      if (C == Be) continue;
      if (*C == x) {
 if (D < De) *D++ = x;
      }
    }
  }

  return D;
}