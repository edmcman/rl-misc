#include <sys/cdefs.h>

# 1 
static char
is_pack_letter(short *c, unsigned short *mask)
{
 if (((*c == '?') || (*c == '!') || (*c == ':') || (*c == '=') ||
  (*c == ')') || (*c == ']') || (*c == '/') || (*c == ','))) {
  switch(*c) {
  case '?':
   *mask = ((unsigned short) 04);
   break;
  case '!':
   *mask = ((unsigned short) 010);
   break;
  case ':':
   *mask = ((unsigned short) 040);
   break;
  case ')':
   *mask = ((unsigned short) 02);
   break;
  case ']':
   *mask = ((unsigned short) 01);
   break;
  case '/':
   *mask = ((unsigned short) 0100);
   break;
  case '=':
   *mask = ((unsigned short) 0200);
   break;
  case ',':
   *mask = ((unsigned short) 0400);
   break;
  }
  *c = '*';
  return(1);
 }
 return(((*c >= 'a') && (*c <= 'z')) || (*c == '\033') || (*c == '*'));
}