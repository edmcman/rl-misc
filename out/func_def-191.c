#include <stddef.h>

#include <errno.h>

#include <regex.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
static void translit_text( char * p, int len, const char from, const char to )
  {
  while( --len >= 0 )
    {
    if( *p == from ) *p = to;
    ++p;
    }
  }