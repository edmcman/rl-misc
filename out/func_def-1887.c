#include <stdlib.h>

#include <string.h>

# 1 
int
_encode_remaining_length(char *buffer, int length) {
 char d;
 int num = 0;
 do
 {
  d = length % 128;
  length /= 128;
  if (length > 0)
   d |= 0x80;
  buffer[num++] = d;
 } while (length > 0);
 return num;
}