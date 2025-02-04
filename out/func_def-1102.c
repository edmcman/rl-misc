#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <errno.h>

# 1 
static void substr(char *dest, const char *src, int offset, int size) {
 for (int i = 0; i < offset; i++) {
  if (src[i] == '\0') {
   dest[0] = '\0';
   return;
  }
 }

 for (int i = 0; i < size; i++) {
  char c = src[offset+i];
  dest[i] = c;
  if (c == '\0') {
   return;
  }
 }

 dest[size] = '\0';
}