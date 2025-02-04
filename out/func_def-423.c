#include <stdio.h>

# 1 
void escape(char *s, char *t) {
 int i,j = 0;

 for(i = 0; t[i] != '\0' && j <= 100 -3; i++) {
  switch(t[i]) {
   case '\n':
    s[j++] = '\\';
    s[j++] = 'n';
    break;
   case '\t':
    s[j++] = '\\';
    s[j++] = 't';
    break;
   default:
    s[j++] = t[i];
    break;
  }
 }
 s[j] = '\0';
 return;
}