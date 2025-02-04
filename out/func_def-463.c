#include <stdio.h>

# 1 
void unescape(char s1[], char s2[]) {
  int i, j;

  i = j = 0;

  while (s2[i]) {
    switch (s2[i]) {
      case '\\':
        switch (s2[++i]) {
          case 'n':
            s1[j] = '\n';
            break;
          case 't':
            s1[j] = '\t';
            break;
          case '\\':
            s1[j] = '\\';
            break;
          case '\"':
            s1[j] = '\"';
            break;
          default:
            s1[j++] = '\\';
            s1[j] = s2[i];
        }
        break;
      default:
        s1[j] = s2[i];
    }
    ++i;
    ++j;
  }

  s1[j] = s2[i];
}