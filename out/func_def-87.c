#include <stdio.h>   /* FILE */

#include <stdlib.h>  /* malloc(), calloc(), free() */

#include <string.h>  /* strcmp() */

# 1 
static void copystringlcase(char *dst, char *src) {
  int x;
  for (x = 0; src[x] != 0; x++) {
    if ((src[x] >= 'A') && (src[x] <= 'Z')) {
        dst[x] = ('a' - 'A') + src[x];
      } else {
        dst[x] = src[x];
    }
  }
  dst[x] = 0;
}