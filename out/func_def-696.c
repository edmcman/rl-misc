#include <curses.h>

#include <stdlib.h>

# 1 
void copystr(char *dest, char *src)
{
 if (!dest || !src) {
  return;
 }

 while (*src) {
  *dest = *src;
  ++src;
  ++dest;
 }
}