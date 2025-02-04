#include <stddef.h>

# 1 
char* strcpy (char *d, const char *s)
{
 char *tmp = d;







 while ((*d++ = *s++) != '\0');

 return tmp;
}