#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <unistd.h>	

# 1 
void
ToDNA(char *seq)
{
  for (; *seq != '\0'; seq++)
    {
      if (*seq == 'U') *seq = 'T';
      else if (*seq == 'u') *seq = 't';
    }
}