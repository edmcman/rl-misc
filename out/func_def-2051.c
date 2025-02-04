#include <string.h>

# 1 
char *
strdchr(char *p)
{
 char *t;

 if(p != NULL) {
  for (t = p; *t; t++) {
   *t = *(t + 1);
  }
 }
 return (p);
}