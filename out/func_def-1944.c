#include <stdio.h>

# 1 
void itoa(unsigned int n, char * buf){
 buf[8] = '\0';
 unsigned int ind = 7, count = 8;
 while(count-- > 0){
  char c = n & 0xF;
  if(c > 9){
   c = c-10+'A';
  }else{
   c = c+'0';
  }

  buf[ind] = c;
  ind--;
  n = n >> 4;
 }
}