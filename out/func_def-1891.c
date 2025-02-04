#include <curses.h>

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include <ctype.h>

# 1 
void AppendSlash(char *Buf)
{
  if (*Buf == 0) {
    Buf[0] = '/';
    Buf[1] = 0;
  }

  while(*Buf) Buf++;
  if (*(Buf-1) != '/') {
    Buf[0] = '/';
    Buf[1] = 0;
  }
}