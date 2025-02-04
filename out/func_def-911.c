#include <stdlib.h>

#include <stdio.h>

#include <stdarg.h>

#include <string.h>

#include <ctype.h>

#include <time.h>

# 1 
int str_utf8_encode(char *ptr, int chr)
{

 if(chr <= 0x7F)
 {
  ptr[0] = (char)chr;
  return 1;
 }
 else if(chr <= 0x7FF)
 {
  ptr[0] = 0xC0|((chr>>6)&0x1F);
  ptr[1] = 0x80|(chr&0x3F);
  return 2;
 }
 else if(chr <= 0xFFFF)
 {
  ptr[0] = 0xE0|((chr>>12)&0x0F);
  ptr[1] = 0x80|((chr>>6)&0x3F);
  ptr[2] = 0x80|(chr&0x3F);
  return 3;
 }
 else if(chr <= 0x10FFFF)
 {
  ptr[0] = 0xF0|((chr>>18)&0x07);
  ptr[1] = 0x80|((chr>>12)&0x3F);
  ptr[2] = 0x80|((chr>>6)&0x3F);
  ptr[3] = 0x80|(chr&0x3F);
  return 4;
 }

 return 0;
}