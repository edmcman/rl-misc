#include <stdlib.h>

#include <stdio.h>

#include <unistd.h>

#include <string.h>

#include <stdbool.h>

#include <math.h>

# 1 
void coords_to_box_coords(int col, int row, int *box_col, int *box_row)
{
  int i;
  *box_col = *box_row = 0;
  for (i = 0; i < col; i++)
  {
    if (i % 3 == 0)
    {
      *box_col += 1;
    }
  }

  for (i = 0; i < row; i++)
  {
    if (i % 3 == 0)
    {
      *box_row += 1;
    }
  }
}