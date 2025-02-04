#include <stdio.h>

#include <ctype.h>

#include <stdlib.h>

#include <time.h>

# 1 
char* mystpncpy(char *dest, char *src, int n) {
 int i;
 for (i = 0; i < n && *src; i++)
  *dest++ = *src++;
 *dest = '\0';
 return dest;
}