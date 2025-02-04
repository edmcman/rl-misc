#include <stdio.h>

#include <stdlib.h>

# 1 
void swap (unsigned int* a, unsigned int* b) {
 int t = *a;
 *a = *b;
 *b = t;
}