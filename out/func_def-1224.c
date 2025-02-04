#include <stdio.h>

# 1 
void strcpy1 (char s[], char t[])
{
 int i = 0;

 while ((s[i] = t[i]) != '\0')
  i++;
}