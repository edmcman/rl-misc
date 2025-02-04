#include <stdio.h>

#include <stddef.h>

#include <assert.h>

# 1 
static void reduce_double_grid_address(long address[3], const long mesh[3])
{
  long i;

  for (i = 0; i < 3; i++) {

    address[i] -= 2 * mesh[i] * (address[i] > mesh[i]);



  }
}