#include <stdio.h>

#include <unistd.h>

# 1 
char *ft_strcpy(char *dest, char *src)
{
 int i;

 i = 0;
 while (src[i])
 {
  dest[i] = src[i];
  i++;
 }
 dest[i] = src[i];
 dest[i + 1] = '\0';
 return (dest);
}