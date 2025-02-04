#include <string.h>

#include <errno.h>

#include <stdlib.h>

# 1 
char *ehnlc_strcpy(char *dest, const char *src)
{
 size_t i;
 if (!dest) {
  return NULL;
 }
 i = 0;
 if (src) {
  while (*(src + i)) {
   *(dest + i) = *(src + i);
   ++i;
  }
 }
 *(dest + i) = '\0';
 return dest;
}