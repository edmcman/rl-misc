#include <stdio.h>

#include <string.h>

#include <errno.h>

#include <ctype.h>

#include <stdarg.h>

# 1 
static char const *unquote_in_place(char *s, char const *e) {
  char const *r = s;

  while (r < e) {
    if (*r == '\\' && r + 1 < e) r++;
    *s++ = *r++;
  }
  *s = '\0';
  return s;
}