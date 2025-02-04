#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
char *RowColumnConvert(char *matrix)
{

    for(int row = 0; row < 4; row++) {
        for(int col = row + 1; col < 5 - 1; col++) {
            ((matrix[row * 5 + col]) = (matrix[row * 5 + col]) ^ (matrix[col * 5 + row]) ^ (matrix[col * 5 + row] = matrix[row * 5 + col]));
        }
    }

    return matrix;
}