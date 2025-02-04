#include <stdio.h>

# 1 
void strcy(char *buffer, char const *string)
{
 while((*buffer++ = *string++) != '\0')
  ;
}