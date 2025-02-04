#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
static void get_token_from_string(const char *str, int *index, char *buff, char d)
{
   char c;
   int i = 0;

   c = str[(*index)];
   if (c != '\0') {
      while (c != d && c != '\0') {
         buff[i++] = c;
         c = str[++(*index)];
      }
      if (c == d)
         (*index)++;
   }
   buff[i] = '\0';
}