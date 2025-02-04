#include <string.h>

# 1 
void lsmFlagsToString(int flags, char *zFlags){

  zFlags[0] = (flags & 0x02) ? ']' : '.';



  switch( flags & (0x04|0x08|0x10) ){
    case 0: zFlags[1] = '.'; break;
    case 0x04: zFlags[1] = '-'; break;
    case 0x08: zFlags[1] = '+'; break;
    case 0x10: zFlags[1] = '^'; break;
    default: zFlags[1] = '?'; break;
  }

  zFlags[2] = (flags & 0x20) ? '*' : '.';
  zFlags[3] = (flags & 0x01) ? '[' : '.';
  zFlags[4] = '\0';
}