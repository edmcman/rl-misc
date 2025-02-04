#include <stdio.h>

# 1 
char *strcpy2(char *dst, const char *src)
{
 char *dst_save = dst;
 if (dst == '\0' || src == '\0')
  return ;
 while ((*dst++ = *src++) != '\0');
 return dst_save;
}