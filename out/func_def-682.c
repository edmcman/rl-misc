#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>

#include <fcntl.h>

# 1 
static int
acl_chk_string(const char *s, unsigned int max_len, unsigned int *out_len)
{
 unsigned int len;

 if (!s)
  return 1;

 for (len = 0; len < max_len; len++)
  if (*s++ == '\0') {
   if (out_len)
    *out_len = len;
   return 0;
  }

 return 1;
}