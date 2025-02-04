#include <stdio.h>

#include <stddef.h>

#include <assert.h>

# 1 
static void get_double_grid_address(long address_double[3],
                                    const long address[3],
                                    const long PS[3])
{
  int i;

  for (i = 0; i < 3; i++) {
    address_double[i] = address[i] * 2 + PS[i];
  }
}