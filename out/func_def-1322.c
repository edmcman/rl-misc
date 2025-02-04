#include <stdlib.h>

#include <stdio.h>

#include <unistd.h>

#include <string.h>

#include <stdbool.h>

#include <math.h>

# 1 
void field_to_coords(int field, int *col, int *row)
{
  *row = (field / 9) + 1;
  *col = (field % 9) + 1;
}