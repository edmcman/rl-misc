#include <stdio.h>

#include <string.h>

# 1 
void reverse(char *p)
{
 int c;
 char *q;
 q = p;

 while(*(q++) != '\0'){
  ;
 }
 q -= 2;
 while(q > p) {
  c = *p;
  *(p++) = *q;
  *(q--) = c;
 }
}