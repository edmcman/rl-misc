#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <string.h>

# 1 
static void
strmove(char *d,
        const char *s)
{
  while (*s)
    *d++ = *s++;

  *d = '\0';
}