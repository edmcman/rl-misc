#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>

# 1 
static void ReplaceQuotes(char* quotedLine,char *inputLine)
{
  char *in;
  char *out;
  static char quotes[] = {
    0,
    0,
    '\b',
    0,
    0,
    0,
    '\f',
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    '\n',
    0,
    0,
    0,
    '\r',
    0,
    '\t',
    0,
    '\v',
    0,
    0,
    0,
    0,
    0,0,0,0,0,0
    };




  for (out = quotedLine,in = inputLine; *in; out++, in++)
    {
      if (*in == '\\')
 {
          in++;
          if(*in == '\\')
            *out = '\\';
          else if(*in == '#')
            *out = '#';
   else
     *out = quotes[ (unsigned int) (*in & 0x1F) ];
 }
      else if (*in == '#')
        {
   *out = '\0';
          return;
 }
      else
        *out = *in;
    }
  *out = '\0';
}