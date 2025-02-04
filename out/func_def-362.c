#include <stdio.h>

#include <stdlib.h>

# 1 
static void get_grid_address(int address[3],
        const int grid_double[3],
        const int mesh[3])
{
  int i;

  for (i = 0; i < 3; i++) {
    if (grid_double[i] % 2 == 0) {
      address[i] = grid_double[i] / 2;
    } else {
      address[i] = (grid_double[i] - 1) / 2;
    }


    address[i] = address[i] - mesh[i] * (address[i] > mesh[i] / 2);



  }
}