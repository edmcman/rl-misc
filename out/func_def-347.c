#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <time.h>

#include <limits.h>/*UINT_MAX*/

# 1 
int Calculate_Block_Size(unsigned int HeightBlockIndex, unsigned int WidthBlockIndex, int height, int width, unsigned int *HeightBlockSize, unsigned int *WidthBlockSize)
{
unsigned int HeightBlockStart = HeightBlockIndex * (32/2);
unsigned int WidthBlockStart = WidthBlockIndex * (32/2);

if ((HeightBlockStart + 32) <= height)
 (*HeightBlockSize) = 32;
else
 (*HeightBlockSize) = height - HeightBlockStart;

if ((WidthBlockStart + 32) <= width)
 (*WidthBlockSize) = 32;
else
 (*WidthBlockSize) = width - WidthBlockStart;

return 1;
}