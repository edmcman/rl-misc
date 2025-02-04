#include <stdio.h>

# 1 
void getmatch (int c[], char s[]) {
 int i;

 for (i = 0; s[i] != '\0'; ++i, ++c[1]) {
  if ((c[0] = getchar()) != s[i]) {
   ++c[1];
   break;
  }
 }

 if (s[i] == '\0')
  c[2] = c[1] - i;
}