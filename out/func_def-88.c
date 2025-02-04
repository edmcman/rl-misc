#include <stdlib.h>

#include <string.h>

# 1 
char* my_strcpy (char* dest, const char* src)
{
   char c, *s = (char *) src;
   long off = dest - s;
   off = off - 1;
   do {
      c = *s++;
      s[off] = c;
   } while (c != '\0');
   return dest;
}