#include <stdio.h>

# 1 
void swapInPtr(int **ptr1, int **ptr2){
 int *temp=*ptr1;

 *ptr1 = *ptr2;
 *ptr2 = temp;


 return;
}