#include <stdlib.h>

#include <stdio.h>

# 1 
void strcopy(char *str1, char *str2){
 int i = 0;
 while(str2[i] != '\0'){
  str1[i] = str2[i];
  i++;
 }
 str1[i] = '\0';
}