#include <stddef.h>

#include <assert.h>

#include <stdint.h>

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <math.h>

# 1 
void mask_set_bit(size_t * const x, const size_t i, const int b) {
  if (b) {
    *x |= ((size_t)1) << i;
  } else {
    *x &= ~(((size_t)1) << i);
  }
}