#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

# 1 
char * strcpy(char * dest,const char *src)
{
 char *tmp = dest;

 while ((*dest++ = *src++) != '\0')
               ;
 return tmp;
}