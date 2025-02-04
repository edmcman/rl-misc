#include <string.h>

#include <stdlib.h>

# 1 
int
filter_string(char *string, char filters_array[])
{
 char *result = string;
 char *end = string;

 while (*end) {
  char *pos;


  for (pos=filters_array ; *pos && (*pos != *end) ; pos++);

  if (!*pos) {
   *result++ = *end;
  }
  end++;
 }
 *result = '\0';

 return result - string;
}