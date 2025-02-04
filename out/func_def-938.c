#include <ctype.h>

#include <errno.h>

#include <stdbool.h>

#include <stdint.h>

#include <stdlib.h>

#include <stdio.h>

#include <string.h>

# 1 
char
jsonny_pop(char *s, size_t *len) {
  char c;
  if (*len > 0) {
    (*len)--;
    c = s[*len];
    s[*len] = '\0';
    return c;
  }
}