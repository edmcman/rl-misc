#include <stdio.h>

# 1 
void accept_i16(short* it){
 *it = 0;
 int c;
 while(1){
  c = getchar();
  if(c < '0') break;
  if(c > '9') break;
  *it *= 10;
  *it += c - '0';
 }
}