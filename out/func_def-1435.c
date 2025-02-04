#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
int Utf8ToAnsi(char *dest, const char *src, int destLen)
{
 int di,si,si2,si3;
 int conv;

 conv = 0;
 di = 0;
 si = 0;
 destLen--;

 while ((src[si] != '\0') && (di < destLen))
 {
  si2 = si+1;
  si3 = si2+1;

  if ((unsigned char)src[si] <= 0x7F)
  {
   dest[di++] = src[si++];
   conv++;
  }
  else if ((unsigned char)src[si] <= 0xDF)
  {
   if (((unsigned char)src[si] & 0x1C) == 0)
   {
    dest[di++] = ((src[si] & 0x03) << 6) | (src[si2] & 0x3F);
    conv++;
   }
   si+=2;
  }
  else if ((unsigned char)src[si] <= 0xEF)
  {

   si+=3;
  }
  else if ((unsigned char)src[si] <= 0xF7)
  {

   si+=4;
  }
 }
 dest[di] = '\0';

 return conv;
}