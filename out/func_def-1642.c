#include <stdio.h>

# 1 
void strcpy2(char s1[], char s2[]) {
  int i = 0;

  do {
    s1[i] = s2[i];
  } while (s2[i++] != '\0');
}