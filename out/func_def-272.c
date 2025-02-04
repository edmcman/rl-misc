#include <ctype.h>

#include <stdio.h>

# 1 
void reverse (char s[]) {
 int i, max;
 char temp;

 for (i = 0; s[i] != '\0'; ++i);
 max = i;



 for (i = 0; i < max / 2; ++i) {
  temp = s[i];
  s[i] = s[max - (i + 1)];
  s[max - (i + 1)] = temp;
 }
}