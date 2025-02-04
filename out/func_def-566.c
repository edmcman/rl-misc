#include <ctype.h>

#include <string.h>

#include <stdlib.h>

#include <float.h>

#include <math.h>

# 1 
size_t utf32_to_utf8(const int utf32, char *const utf8)
{
 if (utf32 < 0x00) {
  if (utf8 != NULL) {
   utf8[0] = (char)(-utf32);
  }
  return 1;
 }
 if (utf32 < 0x80) {
  if (utf8 != NULL) {
   utf8[0] = (char)utf32;
  }
  return 1;
 }
 if (utf32 < 0x800) {
  if (utf8 != NULL) {
   utf8[0] = 0xC0 | (char)(utf32 >> 6);
   utf8[1] = 0x80 | (utf32 & 0x3F);
  }
  return 2;
 }
 if (utf32 < 0x10000) {
  if (utf8 != NULL) {
   utf8[0] = 0xE0 | (char)(utf32 >> 12);
   utf8[1] = 0x80 | (utf32 >> 6 & 0x3F);
   utf8[2] = 0x80 | (utf32 & 0x3F);
  }
  return 3;
 }
 if (utf32 < 0x110000) {
  if (utf8 != NULL) {
   utf8[0] = 0xF0 | (char)(utf32 >> 18);
   utf8[1] = 0x80 | (utf32 >> 12 & 0x3F);
   utf8[2] = 0x80 | (utf32 >> 6 & 0x3F);
   utf8[3] = 0x80 | (utf32 & 0x3F);
  }
  return 4;
 }
 return 0;
}