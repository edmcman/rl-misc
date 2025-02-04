#include <stdint.h>

#include <string.h>

# 1 
static char *
_getbase(char *p, int *basep)
{
 if (p[0] == '0') {
  switch (p[1]) {
  case 'x':
   *basep = 16;
   break;
  case 't': case 'n':
   *basep = 10;
   break;
  case 'o':
   *basep = 8;
   break;
  default:
   *basep = 10;
   return (p);
  }
  return (p + 2);
 }
 *basep = 10;
 return (p);
}