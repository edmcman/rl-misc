#include <stdint.h>

#include <ctype.h>

#include <string.h>

#include <stdbool.h>

# 1 
static unsigned int integer_to_ascii(char* destination,unsigned int source) {
   unsigned int temp=source;
   unsigned int length=0;

   if(source>=100){
    *destination++=temp/100+'0';
    temp=temp%100;
    ++length;
 }

   if(source>=10){
    *destination++=temp/10+'0';
    temp=temp%10;
    ++length;
 }

   *destination++=temp+'0';
   return length+1;
}