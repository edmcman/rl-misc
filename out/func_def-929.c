#include <stdio.h>

# 1 
void strcpy1(char s1[], char s2[]) {
  int i = 0;

  for (i = 0; s2[i] != '\0'; i++)
    s1[i] = s2[i];


  s1[i] = '\0';
}