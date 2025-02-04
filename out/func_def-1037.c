#include <stdlib.h>

#include <stdio.h>

#include <ctype.h>

#include <string.h>

#include <stdio.h>

#include <stdarg.h>

# 1 
static char* my_strcpy ( char* dest, const char* src )
{
   char* dest_orig = dest;
   while (*src) *dest++ = *src++;
   *dest = 0;
   return dest_orig;
}