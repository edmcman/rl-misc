#include <stdio.h>

# 1 
void reverseOneWord(char a[]){
 int start = 0, end=0;
 int len = 0;
 int i=0, j=0;
 char temp;

 for (i = 0; a[i] != 0; i++){
  len++;
 }

 i = 0;
 while (start < len){

  if (a[i] == 32) start += 1;

  for (j = start; a[j] != 32 && a[j] !=0; j++){

  }
  j -= 1;
  end = j;
  for (i = start; i<=j; i++, j--){
   temp = a[i];
   a[i] = a[j];
   a[j] = temp;
  }


  start = end+ 1;
  i = start;
 }

 return;
}