#include <stdio.h>

# 1 
void copyString (char *to, char *from)
{
 while ( *from )
  *to++ = *from++;

 *to = '\0';
}