#include <ctype.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
static void
ex_fstrncpy(char *target,
            char *source,
            int maxlen)
{
  int len = maxlen;

  while (len-- && *source != '\0')
    *target++ = *source++;

  len = maxlen;
  while (len-- && *(--target) == ' ');
  *(++target) = '\0';
}