#include <stdio.h>

#include <stdlib.h>

#include <memory.h>

# 1 
void q_string(char * buf, const char * input) {
  while (*input) {
    switch(*input) {
      case '\n': *buf++ = '\\'; *buf++ = 'n'; break;
      case '\t': *buf++ = '\\'; *buf++ = 'n'; break;
      default : *buf++ = *input;
    }
    ++input;
  }
  *buf++ = '\0';
}