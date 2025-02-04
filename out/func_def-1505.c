#include <stdio.h>

# 1 
void scalarMultiply (int matrix[3][5], int scalar)
{
 int row, column;

 for ( row = 0; row < 3; ++row )
  for ( column = 0; column < 5; ++column )
   matrix[row][column] *= scalar;
}