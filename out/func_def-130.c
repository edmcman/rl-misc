#include <stdlib.h> */

#include <stdio.h>

#include <string.h>

# 1 
void jis2sjis(int *p1, int *p2)
{
 register unsigned char c1 = *p1;
 register unsigned char c2 = *p2;
 register int rowOffset = c1 < 95 ? 112 : 176;
 register int cellOffset = c1 % 2 ? 31 + (c2 > 95) : 126;

 *p1 = ((c1 + 1) >> 1) + rowOffset;
 *p2 = c2 + cellOffset;
}