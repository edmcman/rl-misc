#include <stdio.h>

# 1 
void rotr(int* a, int* b, int* c) {
 *a ^= *b;
 *b ^= *a;
 *a ^= *b;

 *c = *c + *a;
 *a = *c - *a;
 *c = *c - *a;

}