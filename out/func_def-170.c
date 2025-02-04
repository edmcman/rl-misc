#include <stdio.h>

#include <string.h>

#include <ctype.h>

# 1 
char *hugo_strcpy(char *s, const char *t)
{
 char *r = s;
 while ((*s++ = *t++) != 0) ;
 return r;
}