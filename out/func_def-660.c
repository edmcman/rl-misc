#include <stdio.h>

# 1 
char * my_strcpy(char *s1,const char *s2)
{
 char *temp=s1;
 while( '\0' != *s2 )
 {
  *s1 = *s2;
  s2++;
  s1++;
 }
 *s1 = '\0';
 return temp;
}