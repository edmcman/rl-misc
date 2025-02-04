#include <stdio.h>

#include <stdlib.h>

# 1 
void reverse_bytes(int *value)
{
 int i, temp, temp2;


 temp = *value;
 temp2 = temp & 255;


 for(i=0;i<3;i++){
  temp = temp >> 8;
  temp2 = temp2 << 8;
  temp2 = temp2 | (temp & 255);
 }
 *value = temp2;
}