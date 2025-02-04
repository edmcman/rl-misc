#include <stdio.h>

#include <string.h>

#include <errno.h>

# 1 
int add_char_to_buffer(int *len, char *buf, int maxlen, char c)
{
  if(*len >= maxlen) return 0;

  buf[(*len)++] = c;

  return 1;
}