#include <stdio.h>

# 1 
int clear_bit(int *ptr, int n){
 *ptr = *ptr & ~(1 << n);
 return *ptr;
}