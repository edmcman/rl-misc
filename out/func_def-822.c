#include <stdio.h>

# 1 
void swap(int *x,int *y) {
 int temp = *x;
 *x = *y;
 *y = temp;
}