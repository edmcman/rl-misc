#include <stddef.h>   //for NULL

# 1 
void my_strcpy(char *d, const char *s)
{
  char *source = (char*)s;
  while(*source)
    *d++ = *source++;
  *d = 0;
}