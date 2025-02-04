#include <stdio.h>

#include <string.h>

# 1 
char *string_copy (char *a, char *b)
{
 int i;
 for (i = 0; b[i] != '\0'; i++)
 {
  a[i] = b[i];
 }
 a[i] = '\0';
 return a;
}