#include <stdio.h>

#include <stddef.h>

#include <string.h>

#include <stdlib.h>

#include <errno.h>

# 1 
static int utf32_utf8(char *buf, int k)
{
 int retval = 0;

 if (k < 0x80) {
  buf[0] = k;
  retval = 1;
 } else if (k < 0x800) {
  buf[0] = 0xc0 | (k >> 6);
  buf[1] = 0x80 | (k & 0x3f);
  retval = 2;
 } else if (k < 0x10000) {
  buf[0] = 0xe0 | (k >> 12);
  buf[1] = 0x80 | ((k >> 6) & 0x3f);
  buf[2] = 0x80 | (k & 0x3f);
  retval = 3;
 } else if (k < 0x200000) {
  buf[0] = 0xf0 | (k >> 18);
  buf[1] = 0x80 | ((k >> 12) & 0x3f);
  buf[2] = 0x80 | ((k >> 6) & 0x3f);
  buf[3] = 0x80 | (k & 0x3f);
  retval = 4;
 } else if (k < 0x4000000) {
  buf[0] = 0xf8 | (k >> 24);
  buf[1] = 0x80 | ((k >> 18) & 0x3f);
  buf[2] = 0x80 | ((k >> 12) & 0x3f);
  buf[3] = 0x80 | ((k >> 6) & 0x3f);
  buf[4] = 0x80 | (k & 0x3f);
  retval = 5;
 } else {
  buf[0] = 0xfc | (k >> 30);
  buf[1] = 0x80 | ((k >> 24) & 0x3f);
  buf[2] = 0x80 | ((k >> 18) & 0x3f);
  buf[3] = 0x80 | ((k >> 12) & 0x3f);
  buf[4] = 0x80 | ((k >> 6) & 0x3f);
  buf[5] = 0x80 | (k & 0x3f);
  retval = 6;
 }
 buf[retval] = '\0';

 return retval;
}