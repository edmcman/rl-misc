#include <stdio.h>

#include <string.h>

#include <ctype.h>

# 1 
void upcase(char *msg, int length)
{
  int i;
  for (i=0; i<length; i++)
  {
    if (msg[i] > 96)
    {
       msg[i] = msg[i] - 32;
    }
  }
}