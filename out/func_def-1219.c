#include <stdio.h>

#include <string.h>

# 1 
void binaryplus(int *binary)
{
 int i = 1;
 binary[i]++;
 for(; i < 10; i++)
 {
  if(binary[i] >= 2)
  {
   binary[i+1]++;
   binary[i] = 0;
  }
 }
}