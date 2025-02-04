#include <sys/types.h>

#include <stdio.h>

# 1 
size_t utoa(char *str, unsigned int u)
{
 char tmp[(sizeof("-2147483648") - 1)+1];
 char *end = tmp + sizeof(tmp);
 char *p = end - 1;
 char *s = str;

 do {
  *p-- = '0' + (u % 10);
  u /= 10;
 } while (u != 0);

 for (++p; p < end; p++)
  *s++ = *p;

 *s = 0;
 return (size_t)(s - str);
}