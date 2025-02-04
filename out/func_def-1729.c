#include <stdio.h>

#include <stdlib.h>

# 1 
char * reverser (char * s) {
 unsigned e, max;
 char temp;

 for (e = 0; s[e] != '\0'; ++e);
 max = e;

 for (e = 0; e < max / 2; ++e) {
  temp = s[e];
  s[e] = s[max - (e + 1)];
  s[max - (e + 1)] = temp;
 }

 return s;
}