#include <ctype.h>

#include <string.h>

#include <stdlib.h>

#include <float.h>

#include <math.h>

# 1 
size_t utf8_get_next(const char *utf8, int *utf32)
{
 const unsigned char *p = (unsigned char *)utf8;

 if (p[0] < 0x80) {
  if (utf32 != NULL) {
   *utf32 = p[0];
  }
  return 1;
 } else if (p[0] < 0xC2) {
  if (utf32 != NULL) {
   *utf32 = -p[0];
  }
  return 1;
 } else if (p[0] < 0xE0) {
  if (p[1] < 0x80 || 0xBF < p[1]) {
   if (utf32 != NULL) {
    *utf32 = -p[0];
   }
   return 1;
  }
  if (utf32 != NULL) {
   *utf32 = ((p[0] & 0x1F) << 6) | (p[1] & 0x3F);
  }
  return 2;
 } else if (p[0] < 0xF0) {
  if (p[1] < (p[0] == 0xE0 ? 0xA0 : 0x80) || (p[0] == 0xED ? 0x9F : 0xBF) < p[1]) {
   if (utf32 != NULL) {
    *utf32 = -p[0];
   }
   return 1;
  }
  if (p[2] < 0x80 || 0xBF < p[2]) {
   if (utf32 != NULL) {
    *utf32 = -p[0];
   }
   return 1;
  }
  if (utf32 != NULL) {
   *utf32 = ((p[0] & 0x0F) << 12) | ((p[1] & 0x3F) << 6) | (p[2] & 0x3F);
  }
  return 3;
 } else if (p[0] < 0xF5) {
  if (p[1] < (p[0] == 0xF0 ? 0x90 : 0x80) || (p[0] == 0xF4 ? 0x8F : 0xBF) < p[1]) {
   if (utf32 != NULL) {
    *utf32 = -p[0];
   }
   return 1;
  }
  if (p[2] < 0x80 || 0xBF < p[2]) {
   if (utf32 != NULL) {
    *utf32 = -p[0];
   }
   return 1;
  }
  if (p[3] < 0x80 || 0xBF < p[3]) {
   if (utf32 != NULL) {
    *utf32 = -p[0];
   }
   return 1;
  }
  if (utf32 != NULL) {
   *utf32 = ((p[0] & 0x07) << 18) | ((p[1] & 0x3F) << 12) | ((p[2] & 0x3F) << 6) | (p[3] & 0x3F);
  }
  return 4;
 } else {
  if (utf32 != NULL) {
   *utf32 = -p[0];
  }
  return 1;
 }
}