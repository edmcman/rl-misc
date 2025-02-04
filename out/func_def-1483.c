#include <stdio.h>

#include <string.h>

# 1 
void zstrcpy( char *d, const char *s )
{
 while( (*d++ = *s++) != '\0' )
  ;
}