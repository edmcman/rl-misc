#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void bin(char* buf, int c) {
  int i = 8 - 1;
  for (int mask = 0x01; mask < 0xff; mask <<= 1) {
    buf[i--] = c & mask ? '1' : '0';
  }
  buf[8] = ' ';
  buf[8 + 1] = '\0';
}