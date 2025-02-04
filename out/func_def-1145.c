#include <stdio.h>

#include <string.h>

# 1 
int unicoder_utf32_encode(unsigned char* p, unsigned int x, unsigned int endianness)
{
 int i, index;
 unsigned int temp;
 const int debug_utf32_encode= 1;

 if(endianness != 2 && endianness != 1)
  return -4;

 if(p == NULL)
  return -1;


 if(x > 0x10ffff)
  return -16;


 if(0xd800 <= x && x <= 0xdfff)
  return -16;

 for(i= 0; i < 4; i++)
 {
  temp= (x << (i * 8)) & 0xff000000;

  if(endianness == 2)
   index= i;

  else
   index= 3 - i;

  *(p + index)= (unsigned char) ((temp >> 24) & 0x000000ff);
 }

 return 4;
}