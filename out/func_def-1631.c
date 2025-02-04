#include <stdio.h>

# 1 
void copy(char to[], char from[]) {
 int pos=0;
 while ( (to[pos] = from[pos]) != '\0' )
  pos++;
}