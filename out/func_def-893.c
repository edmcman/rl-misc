#include <string.h>

#include <stdlib.h>

# 1 
void
tor_strstrip(char *s, const char *strip)
{
  char *readp = s;
  while (*readp) {
    if (strchr(strip, *readp)) {
      ++readp;
    } else {
      *s++ = *readp++;
    }
  }
  *s = '\0';
}