#include <stdio.h>

# 1 
void unescape(char *s, char *t) {
 int i, j = 0;
 int escape = 0;

 for(i = 0; t[i] != '\0'; i++) {
  switch(t[i]) {
   case '\\':
    escape = 1;
    break;



   case 'n':
    if (escape == 1) {
     s[j++] = '\n';
     escape = 0;
     break;
    }

   case 't':
    if (escape == 1) {
     s[j++] = '\t';
     escape = 0;
     break;
    }

   default:
    s[j++] = t[i];

    if(escape == 1)
     escape = 0;
    break;
  }
 }
 s[j] = '\0';
 return;
}