#include <stdio.h>

#include <string.h>

# 1 
int str2int (char *str, int *num) {
 int i=0;

 *num = 0;
 while (str[i] != 0) {
  if (str[i] <= '9' && str[i] >= '0') {
   *num *= 10;
   *num += str[i++] - '0';
  }
  else
   return 1;
 }
 return 0;
}