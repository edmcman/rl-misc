#include <stdio.h>

#include <stdlib.h>

# 1 
int String_Copy(char *dst, char *src)
{
  if (dst == NULL || src == NULL)
    return 0;
  while (*src != '\0')
    *dst++ = *src++;
  *dst = '\0';
  return 1;
}