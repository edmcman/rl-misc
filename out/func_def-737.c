#include <stdio.h>

#include <stdlib.h>

# 1 
void format_number(int num, int *category, int *bits)
{
 int abs_num, mask, num_sign;
 register int cat;
 mask = num >> 31;
 abs_num = (num ^ mask) - mask;
 for (cat = 0; abs_num; cat++)
  abs_num >>= 1;

 *category = cat;

 num_sign = mask & 0x1;
 *bits = num + (num_sign << cat) - num_sign;
}