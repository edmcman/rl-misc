#include <stdio.h>

# 1 
int copys(char to[],char from[]){
   int i=0;
   while( (to[i]=from[i])!='\0' ){
 ++i;
    }
    return 0;
}