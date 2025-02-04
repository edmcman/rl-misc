#include <stdio.h>

# 1 
void _strncpy(char *s, char *t, int n) {
 int i = 0;
 while((*s++ = *t++) != '\0' && ++i < n)
  ;
}