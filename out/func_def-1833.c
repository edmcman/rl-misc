#include <stdio.h>

# 1 
void mystrcat(char *t, char *s) {
  while((*t++ = *s++))
    ;
}