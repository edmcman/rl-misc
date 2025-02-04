#include <assert.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
void reverseString(char *str) {
  char *end = str;
  char temp;

  if (str) {

    while(*end) {
      ++end;
    }
    --end;

    while(str < end) {

      temp = *str;
      *str = *end;
      *end = temp;


      ++str;
      --end;
    }
  }
}